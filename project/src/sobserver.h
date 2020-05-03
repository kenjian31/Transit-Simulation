/**
 * @file sobserver.h
 *
 * @copyright 2020 3081 Staff, All rights reserved
 */

#ifndef SRC_SOBSERVER_H_
#define SRC_SOBSERVER_H_

#include "src/data_structs.h"

 /**
  *  @brief Interface for observers, intended to be uniform across
  * all instances of observer pattern in this project.
  * Very simple for now.
  */
class SObserver{
 public:
   /**
    * @brief this is virtual function collect initialize the busdata
    *
    */
  virtual void SNotify(StopData* info) = 0;
};

#endif  // SRC_IOBSERVER_H_
