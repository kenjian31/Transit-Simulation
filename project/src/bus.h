/**
 * @file bus.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_BUS_H_
#define SRC_BUS_H_

#include <iostream>
#include <list>
#include <string>

#include "src/data_structs.h"

#include "src/passenger.h"
#include "src/passenger_loader.h"
#include "src/passenger_unloader.h"
#include "src/route.h"
#include "src/stop.h"
#include "src/iobservable.h"
#include "src/iobserver.h"
class PassengerUnloader;
class PassengerLoader;
class Route;
class Stop;
/**
 * @brief The main class for the bus.
 *
 * Calls to \ref Generate function to get a new instance of a bus.
 *  This is a static call, not requiring an instance to invoke the method.
 */
class Bus : public IObservable{
 public:
   /**
    * @brief  is contructor that initialises Bus object automatically when it is created. 
    *
    * This function will be used for simulation purposes.
    *
    * @param[in] name bus id, left bound (not-inclusive)
    * @param[in] out  outgoing route, right bound (inclusive)
    * @param[in] in  incoming route, left bound (not-inclusive)
    * @param[in] capacity capacity of bus, right bound (inclusive)
    * @param[in] speed Speed of bus, left bound (not-inclusive)
    *
    */
  Bus(std::string name, Route * out, Route * in, int capacity = 60,
     double speed = 1);
    /**
     * @brief  represent if the bus reach the end of route. 
     *
     * This function will be used for simulation purposes.
     *
     * @return true if bus reach the end, else return false
     */
  bool IsTripComplete();
  /**
   * @brief  represent add passenger in stops to the bus object
   *
   * This function will be used for simulation purposes.
   *
   * @param[in] new_passenger New Passenger, left bound (not-inclusive)
   *
   * @return true if load passenge, else retrun false.
   */
  bool LoadPassenger(Passenger *);  // returning revenue delta
  /**
   * @brief  represent the movement of every bue
   *
   * This function will be used for simulation purposes.
   *
   * @return true if the bus moved, else return false
   */
  bool Move();
  /**
   * @brief  keep track each status that Bus class process
   *
   * This function will be used for simulation purposes.
   *
   */
  void Update();
  /**
   * @brief display each status information to the screen
   *
   * @param[in] out Display Out, left bound (not-inclusive)
   *
   * This function will be used for simulation purposes.
   *
   */
  void Report(std::ostream&);

  // Vis Getters
  /**
   * @brief  represent update each status of Bus object
   *
   * This function will be used for simulation purposes.
   *
   */
  void UpdateBusData();
  /**
   * @brief obtain the bus data from Vis
   *
   * This function will be used for simulation purposes.
   *
   * @return bus_data_ Bus Data.
   */
  BusData GetBusData() const;
  /**
   * @brief obtain the bus id
   *
   * This function will be used for simulation purposes.
   *
   * @return name_ Bus id.
   */
  std::string GetName() const { return name_; }
  /**
   * @brief obtain the stop data from Vis
   *
   * This function will be used for simulation purposes.
   *
   * @return next_stop_ Next Stop.
   */
  Stop * GetNextStop() const { return next_stop_; }
  /**
   * @brief obtain the number of passenger on bus
   *
   * This function will be used for simulation purposes.
   *
   * @return passengers_.size() count length of list which represent number of passenger.
    */
  size_t GetNumPassengers() const { return passengers_.size(); }
  /**
   * @brief obtain the max capacity of bus
   *
   * This function will be used for simulation purposes.
   *
   * @return passenger_max_capacity_ Passenger Max Capacity.
   */
  int GetCapacity() const { return passenger_max_capacity_; }

 private:
   /**
    * @brief obtain the number of passenger leave the bus
    *
    * This function will be used for simulation purposes.
    *
    * @return passengers_unloaded number of passenger leave the bus
    */
  int UnloadPassengers();  // returning revenue delta
  // bool Refuel();
  PassengerUnloader * unloader_;
  PassengerLoader * loader_;
  std::list<Passenger *> passengers_;
  int passenger_max_capacity_;
  // double revenue_; // revenue collected from passengers, doesn't include
                      // passengers who pay on deboard
  // double fuel_;   // may not be necessary for our simulation
  // double max_fuel_;
  std::string name_;
  double speed_;  // could also be called "distance travelled in one time step"
  Route * outgoing_route_;
  Route * incoming_route_;
  double distance_remaining_;  // when negative?, unload/load procedure occurs
                              // AND next stop set
  Stop * next_stop_;
  // bool trip_complete_;  // [DERIVED data] when BOTH routes are at end, trip
  // is complete
  // Vis data for bus
  BusData bus_data_;
};
#endif  // SRC_BUS_H_
