/**
 * @file bus_factory.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SMALL_BUS_H_
#define SMALL_BUS_H_

#include <string>
#include "src/bus.h"
/**
 * @brief The main class for the generation of regular bus.
 *
 * Calls to \ref Generate function to get a new instance of a bus.
 *  This is a static call, not requiring an instance to invoke the method.
 */
class SmallBus: public Bus {
 public:
      /**
       * @brief this class represent of generateor which randomly generate small bus.
       *
       * This function will be used for simulation purposes.
       *
       * @param[in] name bus id, left bound (not-inclusive)
       * @param[in] out  outgoing route, right bound (inclusive)
       * @param[in] in  incoming route, left bound (not-inclusive)
       * @param[in] capacity capacity of bus, right bound (inclusive)
       * @param[in] speed Speed of bus, left bound (not-inclusive)
       *
       * @return Bus object with bus id, outgoing route, incoming route, small capacity, speed.
       */
    SmallBus(std::string name, Route * out, Route * in,
      int capacity, double speed);
      /**
       * @brief this class represent of generate 3 number that relate to 3 different buses.
       *
       * @param[in] std::ostream&, left bound (not-inclusive)
       *
       * @return output bus detail.
       */
    void Report(std::ostream&);

 private:
    std::string name_;
    double speed_;
    Route * outgoing_route_;
    int passenger_max_capacity_;
    Route * incoming_route_;
};
#endif  // SMALL_BUS_H_
