/**
 * @file bus_factory.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_BUS_FACTORY_H_
#define SRC_BUS_FACTORY_H_

#include <string>
#include <time.h>
#include "src/bus.h"
#include "src/small_bus.h"
#include "src/regular_bus.h"
#include "src/large_bus.h"
/**
 * @brief The main class for the generation of bus.
 *
 * Calls to \ref Generate function to get a new instance of a bus.
 *  This is a static call, not requiring an instance to invoke the method.
 */
class BusFactory {
 public:
   /**
    * @brief this class represent of bus factory which randomly generate 3 types of bus.
    *
    * This function will be used for simulation purposes.
    *
    * @param[in] name bus id, left bound (not-inclusive)
    * @param[in] out  outgoing route, right bound (inclusive)
    * @param[in] in  incoming route, left bound (not-inclusive)
    * @param[in] capacity capacity of bus, right bound (inclusive)
    * @param[in] speed Speed of bus, left bound (not-inclusive)
    *
    * @return Bus object with bus id, outgoing route, incoming route, capacity, speed.
    */
  static Bus * GenerateBus(std::string name, Route * out, Route * in,
    int capacity, double speed);

 private:
   /**
    * @brief this class represent of generate 3 number that relate to 3 different buses.
    *
    * @return int number represent 3 types of bus.
    */
  static int CapGeneration();
};
#endif  // SRC_BUS_FACTORY_H_
