/**
 * @file bus.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include <vector>
#include "src/iobservable.h"

void IObservable::RegisterObserver(IObserver * observer) {
  observe_.push_back(observer);
}

void IObservable::ClearObservers() {
  observe_.clear();
}

void IObservable::NotifyObservers(BusData * info) {
  for (std::vector<IObserver*>::const_iterator iter = observe_.begin(); iter !=
  observe_.end(); iter++) {
    (*iter)->Notify(info);
  }
}
