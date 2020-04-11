
#ifndef SRC_IOBSERVER_H_
#define SRC_IOBSERVER_H_

#include <string>

#include "src/data_structs.h"

#include <vector>

class IObserver {
public:
  virtual void Notify(BusData *) = 0;

};

#endif // SRC_IOBSERVER_H_
