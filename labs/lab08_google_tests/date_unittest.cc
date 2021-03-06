#include "gtest/gtest.h"

#include <iostream>
#include <math.h>
#include <ctime>

#include "date.h"


class DateTest : public ::testing::Test {
 public:
  void SetUp( ) {
    // code here will execute just before the test ensues
	first_day = Date(2018, 9, 4);
	last_day = Date(2018, 12, 11);
  }
 protected:
  Date first_day;          // first day of classes
  Date last_day;           // last day of classes
};



TEST_F(DateTest, PrintDateTests) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween

  std::string expected_out_1 = "1999-12-31\n";
  std::string expected_out_2 = "1776-07-04\n";
  std::string expected_out_3 = "2018-10-31\n";

  testing::internal::CaptureStdout();
  y2k.PrintDate(true);
  std::string output1 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout(); // You must do this EVERY TIME, or else it will segfault
  ind_day.PrintDate(true);
  std::string output2 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  best_holiday.PrintDate(true);
  std::string output3 = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

TEST_F(DateTest, PrintDateTestsWithoutNewline) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween

  std::string expected_out_1 = "1999-12-31";
  std::string expected_out_2 = "1776-07-04";
  std::string expected_out_3 = "2018-10-31";

  testing::internal::CaptureStdout();
  y2k.PrintDate(false);
  std::string output1 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  ind_day.PrintDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  best_holiday.PrintDate(false);
  std::string output3 = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

/**
  *
  * Note, this is the only provided test case which actually uses our test fixture
  *
  * However, it is illegal to mix TEST() and TEST_F() in the same test case (file).
  *
  */

TEST_F(DateTest, DaysBetweenTests) {
  Date tdate1(2016, 1, 1);
  Date tdate2(2016, 3, 1);
  EXPECT_EQ(tdate1.DaysBetween(tdate2), 60) <<"Days in 2016 between is not calculated properly";
  EXPECT_EQ(first_day.GetUsDate(), "09-04-2018") << "First day of class not setup properly";
  EXPECT_EQ(last_day.GetUsDate(), "12-11-2018") << "Last day of class not setup properly";
  EXPECT_EQ(first_day.DaysBetween(last_day), 98) << "Days between is not calculated properly";
}

/**
  *
  * NOPE!  Can't test PRIVATE methods
  *
  */
/*
TEST(DateTest, ConvertFromDays) {
	Date convert_first_day = ConvertToDays(2458365);
	EXPECT_STREQ(convert_first_day.GetUsDate(), "09-04-2018");
}
*/
TEST_F(DateTest, GetDateTests) {
  Date tdate1(2018, 9, 4);
  Date tdate2(2018, 12, 11);
  EXPECT_EQ(tdate1.GetDate(), "2018-09-04");
  EXPECT_EQ(tdate2.GetDate(), "2018-12-11");
}

TEST_F(DateTest, GetUsDateTests) {
  Date tdate1(2018, 9, 4);
  Date tdate2(2018, 12, 11);
  EXPECT_EQ(tdate1.GetUsDate(), "09-04-2018");
  EXPECT_EQ(tdate2.GetUsDate(), "12-11-2018");
}

TEST_F(DateTest, PrintUsDateTests){
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween

  std::string expected_out_1 = "12-31-1999";
  std::string expected_out_2 = "07-04-1776";
  std::string expected_out_3 = "10-31-2018";

  testing::internal::CaptureStdout();
  y2k.PrintUsDate(false);
  std::string output1 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  ind_day.PrintUsDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  best_holiday.PrintUsDate(false);
  std::string output3 = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

TEST_F(DateTest, DateCurrentTests){
  Date current = Date();
<<<<<<< HEAD
  // std::time_t t = std::time(0);
  // std::tm* now = std::localtime(&t);
  // Date current = t;
  std::string expected_out_1 = "02-22-2020";
  EXPECT_EQ(current.GetUsDate(), expected_out_1);
=======

  Date testd(2020,2,24);
  EXPECT_EQ(current.GetUsDate(), testd.GetUsDate());
>>>>>>> 72f1b954b4af646ede70ca4a6292d935d02f7025
}

TEST_F(DateTest, DateSetUpTests){
  Date tdate(2011, 11, 4);
  EXPECT_EQ(tdate.GetUsDate(), "11-04-2011");
}

TEST_F(DateTest, DateEpochTests){
  Date Date(2413131);
  EXPECT_EQ(Date.GetUsDate(), "01-28-1970");
}

TEST_F(DateTest, OperatorPlusTests){
  Date tdate(1997,10,27);
  tdate = tdate + 1;

  EXPECT_EQ(tdate.GetUsDate(), "10-28-1997");
}

TEST_F(DateTest, OperatorMinusTests){
  Date tdate(1997,10,27);
  tdate = tdate - 1;
  EXPECT_EQ(tdate.GetUsDate(), "10-26-1997");
}
