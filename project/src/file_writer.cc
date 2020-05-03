/**
 * @file bus_factory.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include "src/util.h"
#include "src/file_writer_manager.h"
#include "src/file_writer.h"

void FileWriter::Write(std::string filename, std::vector<std::string> outstr) {
     std::ofstream myfile;
     myfile.open(filename);

     for (int i = 0; i < outstr.size(); i++) {
       myfile << outstr[i] << "\t";
     }
     myfile << "\n";
     myfile.close();
}
