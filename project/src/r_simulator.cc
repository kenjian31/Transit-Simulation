/**
 * @file local_simulator.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include "src/r_simulator.h"

#include <vector>
#include <list>

#include "src/bus.h"
#include "src/stop.h"
#include "src/route.h"
#include "src/rtest_passenger_generator.h"

bool rLocalSimulator::Start() {
  simulation_time_elapsed_ = 0;  // init, but also allows restart

  // int num_round_trips = 10;
  int num_round_trips = 1;
  for (int i = 0; i < num_round_trips; i++) {
    time_since_last_bus_generation_.push_back(0);
  }

  Stop ** CC_SV_stops = new Stop *[8];
  Stop ** CC_PP_stops = new Stop *[9];
  std::list<Stop *> CC_SV_stops_list;
  std::list<Stop *> CC_PP_stops_list;

  // Staticly defined objects get destroyed at end of Start()!
  // Must be dynamic...
  // CC Stadium Village
  Stop * stop_CC_SV_1 = new Stop(0, 44.972392, -93.243774);  // Blegen
  Stop * stop_CC_SV_2 = new Stop(1, 44.971839, -93.222027);  // Quard
  Stop * stop_CC_SV_3 = new Stop(2, 44.973676, -93.223014);  // WaHu
  Stop * stop_CC_SV_4 = new Stop(3, 44.973654, -93.217614);  // 44 North
  Stop * stop_CC_SV_5 = new Stop(4,  44.971414, -93.214169);  // Fresh

  // CC Prospect Park Station
  Stop * stop_CC_PP_1 = new Stop(4,  44.971414, -93.214169);  // Fresh
  Stop * stop_CC_PP_2 = new Stop(3, 44.973654, -93.217614);  // 44 North
  Stop * stop_CC_PP_3 = new Stop(2, 44.973676, -93.223014);  // WaHu
  Stop * stop_CC_PP_4 = new Stop(1, 44.971839, -93.222027);  // Quard
  Stop * stop_CC_PP_5 = new Stop(0, 44.972392, -93.243774);  // Blegen


  CC_SV_stops_list.push_back(stop_CC_SV_1);
  CC_SV_stops[0] = stop_CC_SV_1;
  CC_SV_stops_list.push_back(stop_CC_SV_2);
  CC_SV_stops[1] = stop_CC_SV_2;
  CC_SV_stops_list.push_back(stop_CC_SV_3);
  CC_SV_stops[2] = stop_CC_SV_3;
  CC_SV_stops_list.push_back(stop_CC_SV_4);
  CC_SV_stops[3] = stop_CC_SV_4;
  CC_SV_stops_list.push_back(stop_CC_SV_5);
  CC_SV_stops[4] = stop_CC_SV_5;

  CC_PP_stops_list.push_back(stop_CC_PP_1);
  CC_PP_stops[0] = stop_CC_PP_1;
  CC_PP_stops_list.push_back(stop_CC_PP_2);
  CC_PP_stops[1] = stop_CC_PP_2;
  CC_PP_stops_list.push_back(stop_CC_PP_3);
  CC_PP_stops[2] = stop_CC_PP_3;
  CC_PP_stops_list.push_back(stop_CC_PP_4);
  CC_PP_stops[3] = stop_CC_PP_4;
  CC_PP_stops_list.push_back(stop_CC_PP_5);
  CC_PP_stops[4] = stop_CC_PP_5;


  double * CC_SV_distances = new double[4];
  double * CC_PP_distances = new double[4];
  CC_SV_distances[0] = 4;
  CC_SV_distances[1] = 4;
  CC_SV_distances[2] = 2;
  CC_SV_distances[3] = 19;
  CC_SV_distances[4] = 1;


  CC_PP_distances[0] = 2;
  CC_PP_distances[1] = 1;
  CC_PP_distances[2] = 2;
  CC_PP_distances[3] = 19;
  CC_PP_distances[4] = 3;



  std::list<double> CC_SV_probs;  // realistic .15, .3, .025, .05, .05, 0
  CC_SV_probs.push_back(.15);  // BH
  CC_SV_probs.push_back(.35);  // QOD
  CC_SV_probs.push_back(.4);  // WH
  CC_SV_probs.push_back(.2);  // 44N
  CC_SV_probs.push_back(.1);  // FTFM

  // TODO(my_username): is this always true? If so, we may
  //  want to reduce the length of probs to_char_type
  //        remove possibility of generating passengers with nowhere to go

  std::list<double> CC_PP_probs;  // realistic .35, .05, .01, .01, .2, 0
  CC_PP_probs.push_back(.1);  // FTFM
  CC_PP_probs.push_back(.2);  // 44N
  CC_PP_probs.push_back(.4);  // WH
  CC_PP_probs.push_back(.35);  // QOD
  CC_PP_probs.push_back(.15);  // BH


RtestPassengerGenerator * CC_SV_generator =
 new RtestPassengerGenerator (CC_SV_probs, CC_SV_stops_list);
RtestPassengerGenerator * CC_PP_generator =
 new RtestPassengerGenerator (CC_PP_probs, CC_PP_stops_list);

Route * CC_SV = new Route("Campus Connector - Stadium Village",
  CC_SV_stops, CC_SV_distances, 4, CC_SV_generator);
Route * CC_PP = new Route("Campus Connector - Prospect Park",
  CC_PP_stops, CC_PP_distances, 4, CC_PP_generator);

  prototype_routes_.push_back(CC_SV);
  prototype_routes_.push_back(CC_PP);

  prototype_routes_[0]->Report(std::cout);
  prototype_routes_[1]->Report(std::cout);

  bus_counters_.push_back(10000);

  // This will eventually be replaced by configuration/command line argument
  bus_start_timings_.push_back(10);

  // Do we want a bus on start? Or let the update handle this?
  // active_buses_.push_back(new Bus(std::to_string(bus_counters_[0]),
  //   prototype_routes[0].Clone(), prototype_routes[1].Clone(), 60, 1));
  // bus_counters_[0]++;

  return true;
}

bool rLocalSimulator::Update() {
  // increase time
  simulation_time_elapsed_++;
  std::cout << "~~~~~~~~~~~~~ The time is now " << simulation_time_elapsed_;
  std::cout << " ~~~~~~~~~~~~~" << std::endl;

  // various route-indexed list iterators
  std::vector<int>::iterator bus_gen_timing_iter = bus_start_timings_.begin();
  std::vector<int>::iterator bus_counter_iter = bus_counters_.begin();
  std::vector<Route *>::iterator prototype_route_iter =
                                                     prototype_routes_.begin();

  // increase each time since last bus
  // various iterators parallel the time_since_last iterator
  for (std::vector<int>::iterator it = time_since_last_bus_generation_.begin();
      it != time_since_last_bus_generation_.end();
      it++, bus_gen_timing_iter++, bus_counter_iter++) {
    (*it)++;

    // if time since last [index] == bus gen timing[index]
    if (0 >= (*bus_gen_timing_iter)) {
      // create a new bus! routes are:
      // prototype_routes_[index * 2] & prototype_routes_[index * 2 + 1]
      Route * outbound = (*prototype_route_iter);
      prototype_route_iter++;
      Route * inbound = (*prototype_route_iter);
      prototype_route_iter++;

      active_buses_.push_back(new Bus(std::to_string((*bus_counter_iter)),
                                  outbound->Clone(), inbound->Clone(), 60, 1));
      (*bus_counter_iter)++;
      (*bus_gen_timing_iter) = 10;
    } else {
      prototype_route_iter++;
      prototype_route_iter++;
      (*bus_gen_timing_iter)--;
    }
  }

  // for each bus
  for (std::list<Bus *>::iterator bus_iter = active_buses_.begin();
      bus_iter != active_buses_.end(); bus_iter++) {
    // update bus
    (*bus_iter)->Update();
    // bus report
    (*bus_iter)->Report(std::cout);

    // REQUIRES USE OF IsTripComplete, which was not required
    // Buses which are "done" will just keep having Update() called
    //  Students MAY need to deal with this, not sure yet...
    // remove bus if trip is complete
    // if ((*bus_iter)->IsTripComplete()) {
    //  bus_iter = active_buses_.erase(bus_iter);
    //  bus_iter--;
    //}
  }

  // for each stop
  for (std::vector<Route *>::iterator route_iter = prototype_routes_.begin();
      route_iter != prototype_routes_.end(); route_iter++) {
    // update stop
    (*route_iter)->Update();
    (*route_iter)->Report(std::cout);
  }

  return true;
}
