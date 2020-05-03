/**
 * @file bus.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_UTIL_H_
#define SRC_UTIL_H_

#include <string>
#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>
#include "src/data_structs.h"
class Util {
public:
  /**
   * @brief this class represent of to split the content of csv file
   *
   */
  std::vector<std::string> processOutput(std::ostringstream *);
};

#endif   // SRC_UTIL_H_
