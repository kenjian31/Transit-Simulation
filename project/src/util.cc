/**
 * @file bus_factory.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include "src/util.h"
#include "src/passenger_unloader.h"

std::vector<std::string> Util::processOutput(std::ostringstream* tostr) {
  std::vector<std::string> res;
  std::string str;
  str = tostr->str();
  std::string delim = ": ";
if ("" == str) {
  return res;
}
    char * strs = new char[str.length() + 1];
    std::strcpy(strs, str.c_str());
    char * d = new char[delim.length() + 1];
    std::strcpy(d, delim.c_str());
    char *p = std::strtok(strs, d);
  while (p) {
  std::string s = p;
  res.push_back(s);
  p = std::strtok(NULL, d);
}
  return res;
}
