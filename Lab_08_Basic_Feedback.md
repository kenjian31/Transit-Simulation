### Basic Feedback for Lab 08

Run on February 22, 21:10:43 PM.


#### System Files and Lab Directory Structure

+ Pass: Check that directory "googletest" exists.

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab08_google_tests" exists.

+ Pass: Make directory "Lab08_Testing".

+ Pass: Change into directory "Lab08_Testing".


#### Essential Files Exist

+ Pass: Check that file "../labs/lab08_google_tests/date_unittest.cc" exists.


### Testing correct implementation

+ Pass: Copy directory "Lab08 files.".



+ Pass: Copy directory "Files for correct version".



+ Pass: Change into directory "correct".

+ Pass: Check that make compiles.



+ Pass: Check that file "date_unittest" exists.

+ Pass: Get all google tests.
    11 tests found.




#### Results

+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTestsWithoutNewline.



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.DaysBetweenTests.
<pre>
[ RUN      ] DateTest.DaysBetweenTests
./date_unittest.cc:87: Failure
      Expected: tdate1.DaysBetween(tdate2)
      Which is: 60
To be equal to: 59
Days in 2016 between is not calculated properly</pre>



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.GetDateTests.



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.GetUsDateTests.
<pre>
[ RUN      ] DateTest.GetUsDateTests
./date_unittest.cc:114: Failure
      Expected: tdate1.GetUsDate()
      Which is: "09-04-2018"
To be equal to: "2018-09-04"
./date_unittest.cc:115: Failure
      Expected: tdate2.GetUsDate()
      Which is: "12-11-2018"
To be equal to: "2018-12-11"</pre>



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintUsDateTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.DateCurrentTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.DateSetUpTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.DateEpochTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.OperatorPlusTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.OperatorMinusTests.



+ Fail: 81.82% of the tests passed, but the target is 100%.


### Testing Mutants


***Note: This is just the basic feedback.  The feedback that includes the following mutants is run daily as a batch process (click link below)***


Link to full feedback: [Lab_08_Feedback.md](Lab_08_Feedback.md)



 __Below are the mutants that your tests will need to find for the Feedback__:


 * __Mutant:__ Dates constructed with epoch are about 70 years in the future


 * __Mutant:__ Days between calculation seems to be much larger than it should be.


 * __Mutant:__ Dates from GetDate are missing a character


 * __Mutant:__ Todays date month off by one


 * __Mutant:__ 1/1/2016 to 3/1/2016 is 60 days, but this version returns 59


 * __Mutant:__ Dates from GetUsDate are not in the right format (same as GetDate?)


 * __Mutant:__ operator-: Probably a copy paste error


 * __Mutant:__ Developer thought months should be zero-indexed


 * __Mutant:__ Some dates dont have leading zeroes

