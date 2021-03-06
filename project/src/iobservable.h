/**
 * @file iobservable.h
 *
 * @copyright 2020 3081 Staff, All rights reserved.
 */

#ifndef SRC_IOBSERVABLE_H_
#define SRC_IOBSERVABLE_H_

#include <vector>
#include <iostream>

#include "src/iobserver.h"
#include "src/data_structs.h"

/*
 Interface for objects that accept observers
 */

class IObservable{
 public:
   /**
    * @brief this is a constructor
    *
    */
  IObservable() : observers_() {}
  /**
   * @brief this class represent of register each item that been obseved
   *
   */
  void RegisterObserver(IObserver* observer);
  /**
   * @brief this class represent of clear all items that been obseved
   *
   */
  void ClearObservers();
  /**
   * @brief this class represent of notify the simulator when each item that been obseved
   *
   */
  void NotifyObservers(BusData* notification);
 private:
  std::vector<IObserver*> observers_;
};

#endif  // SRC_IOBSERVABLE_H_
