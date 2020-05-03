/**
 * @file iobserver.h
 *
 * @copyright 2020 3081 Staff, All rights reserved
 */

#ifndef SRC_IOBSERVER_H_
#define SRC_IOBSERVER_H_

#include "src/data_structs.h"

/*
 Interface for observers, intended to be uniform across
 all instances of observer pattern in this project.
 Very simple for now.
 */

class IObserver{
 public:
   /**
    * @brief this is virtual function collect initialize the busdata
    *
    */
  virtual void Notify(BusData* info) = 0;
};

#endif  // SRC_IOBSERVER_H_
