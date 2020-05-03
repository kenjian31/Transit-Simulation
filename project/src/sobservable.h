/**
 * @file iobservable.h
 *
 * @copyright 2020 3081 Staff, All rights reserved.
 */

#ifndef SRC_SOBSERVABLE_H_
#define SRC_SOBSERVABLE_H_

#include <vector>
#include <iostream>

#include "src/sobserver.h"
#include "src/data_structs.h"

 /**
  * @brief  Interface for objects that accept observers
  */
class SObservable{
 public:
   /**
    * @brief this is a constructor
    *
    */
  SObservable() : sobservers_() {}
  /**
   * @brief this class represent of clear all items that been obseved
   *
   */
  void RegisterSObserver(SObserver* observer);
  /**
   * @brief this class represent of clear all items that been obseved
   *
   */
  void ClearSObservers();
  /**
   * @brief this class represent of notify the simulator when each item that been obseved
   *
   */
  void NotifySObservers(StopData* notification);
 private:
  std::vector<SObserver*> sobservers_;
};

#endif  // SRC_IOBSERVABLE_H_
