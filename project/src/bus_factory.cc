/**
 * @file bus_factory.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include <random>
#include <vector>
#include "src/bus_factory.h"

Bus * BusFactory::GenerateBus(std::string name, Route * out, Route * in,
  int capacity, double speed) {
  int cap = CapGeneration();
  // using different capacity to determine size
  //  of bus
  Bus* ptr = NULL;

    if (cap == 1) {
      ptr = new SmallBus(name, out, in, capacity, speed);
      return ptr;
    } else if (cap == 2) {
      ptr = new RegularBus(name, out, in, capacity, speed);
      return ptr;
    } else if (cap == 3) {
      ptr = new LargeBus(name, out, in, capacity, speed);
      return ptr;
    }

    return NULL;
  }
  //
  // return new Bus(name, out,  in, new_capacity,
  //                            speed);


int BusFactory::CapGeneration() {
  std::random_device dev1;
  std::mt19937 rng(dev1());
  std::uniform_int_distribution<std::mt19937::result_type> dist1(1, 3);
  int rand_int = dist1(rng);
  int bt = rand_int;
  return bt;
}
