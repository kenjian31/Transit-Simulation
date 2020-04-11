/**
 * @file bus_factory.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include <random>
#include <vector>
#include "src/bus_factory.h"

int state = 0;

Bus * BusFactory::GenerateBus(std::string name, Route * out, Route * in,
  int capacity, double speed) {
  time_t theTime = time(NULL);
  tm *aTime = localtime(&theTime);
  int hour = aTime->tm_hour;
  // using different capacity to determine size
  //  of bus

  Bus* ptr = NULL;

    if (hour >= 6 && hour <= 8) {
      if (state % 3 == 0) {
        ptr = new SmallBus(name, out, in, 30, speed);
        state++;
        return ptr;
        std::cout << "Small Bus deployed" << std::endl;
        std::cout << "Size: 30" << std::endl;
      } else if (state % 3 == 1) {
        ptr = new RegularBus(name, out, in, 60, speed);
        state++;
        return ptr;
        std::cout << "Regular Bus deployed" << std::endl;
        std::cout << "Size: 60" << std::endl;
      }
    } else if (hour > 8 && hour <= 15) {
      if (state % 3 == 0) {
        ptr = new RegularBus(name, out, in, 60, speed);
        state++;
        return ptr;
        std::cout << "Regular Bus deployed" << std::endl;
        std::cout << "Size: 60" << std::endl;
      } else if (state % 3 == 1) {
        ptr = new LargeBus(name, out, in, 90, speed);
        state++;
        return ptr;
        std::cout << "Large Bus deployed" << std::endl;
        std::cout << "Size: 90" << std::endl;
      }

    } else if (hour > 15 && hour <= 20) {
      if (state % 3 == 0) {
        ptr = new SmallBus(name, out, in, 30, speed);
        state++;
        return ptr;
        std::cout << "Small Bus deployed" << std::endl;
        std::cout << "Size: 30" << std::endl;

      } else if (state % 3== 1) {
        ptr = new RegularBus(name, out, in, 60, speed);
        state++;
        return ptr;
        std::cout << "Regular Bus deployed" << std::endl;
        std::cout << "Size: 60" << std::endl;
      } else {
        ptr = new LargeBus(name, out, in, 90, speed);
        state++;
        return ptr;
        std::cout << "Large Bus deployed" << std::endl;
        std::cout << "Size: 90" << std::endl;
    }

  } else {
    ptr = new SmallBus(name, out, in, 30, speed);
    return ptr;
    std::cout << "Small Bus deployed" << std::endl;
    std::cout << "Size: 30" << std::endl;
  }
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
