/**
 * @file r_local_simulator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_IOBSERVABLE_H_
#define SRC_IOBSERVABLE_H_

#include <string>
#include <vector>

#include "src/iobserver.h"
#include "src/data_structs.h"

class IObserver;

class IObservable {
 public:
    void RegisterObserver(IObserver *);
    void ClearObservers();
    void NotifyObservers(BusData *);

 private:
    std::vector<IObserver *> observe_;
};

#endif  // SRC_IOBSERVABLE_H_
