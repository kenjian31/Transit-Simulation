/**
 * @file bus.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_FILE_WRITER_MANAGER_H_
#define SRC_FILE_WRITER_MANAGER_H_
#include <string>
#include <iostream>
#include <fstream>
#include "src/file_writer.h"


class FileWriter;

class FileWriterManager {
public:
  /**
   * @brief this class represent to implement the singleton pattern 
   *
   * @return file_writer.
   */
  static FileWriter Getinstance() {
    return file_writer;
  };

private:
  static FileWriter file_writer;
  FileWriterManager() {}
};

#endif   // SRC_FILE_WRITER_MANAGER_H_
