/* STUDENTS:  DO NOT EDIT THIS FILE.  INSTEAD, MODIFY YOUR OWN PROJECT
 * CODE TO FIT THE SPECIFICATION GIVEN BY THE TESTS IN THIS FILE.
 *
 * If you DO modify it, we overwrite it with a fresh version from our repo
 * when grading, so you can't use it to fudge the tests anyway.
 *
 * This file is used by the CS3081W auto-grading system.
 *
 * Please note, the assessment tests for grading, will use the same include
 * files, class names, and function names for accessing students' code that you
 * find in this file.  So students, if you write your code so that it passes
 * these feedback tests, you can be assured that the auto-grader will at least
 * be able to properly link with your code.
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <gtest/gtest.h>

#include <iostream>
#include <string>
#include <list>
#include <string>

#include "../src/passenger_loader.h"
#include "../src/passenger_unloader.h"
#include "../src/bus.h"
#include "../src/stop.h"

using namespace std;

/******************************************************
* TEST FEATURE SetUp
*******************************************************/
class StopTests : public ::testing::Test {
protected:

  Stop *stop1;
  Bus *bus1, *bus2, *bus3;
  virtual void SetUp() {
    // stop1 = new Stop();
    // pass_loader = new PassengerLoader();
    // pass_unloader = new PassengerUnloader();
  }

  virtual void TearDown() {
    delete stop1;
    stop1 = NULL;
    // pass_loader = NULL;
    // pass_unloader = NULL;
  }
};

TEST_F(StopTests, Constructor){
  stop1 = new Stop(1, 1.0, 1.2);
  EXPECT_EQ(stop1->LoadPassengers(bus1), 0);
  // EXPECT_EQ(stop1->AddPassengers(passenger2), 1);
}

TEST_F(StopTests, Report){
  stop1 = new Stop(1, 3.0, 2.2);
  std::string expected_output_1 = "ID: 1";
  testing::internal::CaptureStdout();
  stop1->Report(std::cout);
  std::string output1 =testing::internal::GetCapturedStdout();


  int p1 = output1.find(expected_output_1);
  EXPECT_GE(p1,0);
}
