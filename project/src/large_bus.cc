/**
 * @file bus_factory.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include <random>
#include <vector>
#include "src/large_bus.h"

LargeBus::LargeBus(std::string name, Route * out, Route * in,
  int capacity, double speed): Bus(name, out, in, capacity = 90, speed = 0.5) {
    name_ = name;
    outgoing_route_ = out;
    incoming_route_ = in;
    passenger_max_capacity_ = 90;
    speed_ = 0.5;
}

void LargeBus::Report(std::ostream& out) {
    out << "Name: " << name_ << std::endl;
    out << "Speed: " << speed_ << std::endl;
    out << "Size: " << passenger_max_capacity_ << std::endl;
}
