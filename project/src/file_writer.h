/**
 * @file bus.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_FILE_WRITER_H_
#define SRC_FILE_WRITER_H_

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

class FileWriter {
public:
  /**
   * @brief this class represent to write content in cantain csv file 
   *
   *
   */
  void Write(std::string, std::vector<std::string>);

};
#endif   // SRC_FILE_WRITER_H_
