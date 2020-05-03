/**
 * @file iobservable.cc
 *
 * @copyright 2020 3081 Staff, All rights reserved.
 */

#include "src/iobservable.h"

void IObservable::RegisterObserver(IObserver* observer) {
  observers_.push_back(observer);
}

void IObservable::ClearObservers() {
  std::cout << "Clearing observers vector of size " << observers_.size()
                                                                << std::endl;
  for (int i = 0; i < static_cast<int>(observers_.size()); i++) {
    delete observers_[i];
  }
  observers_.clear();
}

void IObservable::NotifyObservers(BusData* notification) {
  for (int i = 0; i < static_cast<int>(observers_.size()); i++) {
    observers_[i]->Notify(notification);
  }
}
