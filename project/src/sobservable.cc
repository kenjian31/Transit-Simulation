/**
 * @file sobservable.cc
 *
 * @copyright 2020 3081 Staff, All rights reserved.
 */

#include "src/sobservable.h"

void SObservable::RegisterSObserver(SObserver* sobserver) {
  sobservers_.push_back(sobserver);
}

void SObservable::ClearSObservers() {
  std::cout << "Clearing observers vector of size " << sobservers_.size()
                                                                << std::endl;
  for (int i = 0; i < static_cast<int>(sobservers_.size()); i++) {
    delete sobservers_[i];
  }
  sobservers_.clear();
}

void SObservable::NotifySObservers(StopData* snotification) {
  for (int i = 0; i < static_cast<int>(sobservers_.size()); i++) {
    sobservers_[i]->SNotify(snotification);
  }
}
