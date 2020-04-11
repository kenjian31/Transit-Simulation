/**
 * @file r_local_simulator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_IOBSERVER_H_
#define SRC_IOBSERVER_H_

#include <string>
#include <vector>
#include "src/data_structs.h"

class IObserver {
 public:
  virtual void Notify(BusData *) = 0;
};

#endif  // SRC_IOBSERVER_H_
