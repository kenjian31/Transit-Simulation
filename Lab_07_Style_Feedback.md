### Style Feedback for Lab 07

Run on February 14, 18:40:49 PM.


#### Necessary Files and Structure

+ Pass: Check that directory "cpplint" exists.

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab07_style_doxy" exists.

+ Pass: Change into directory "labs/lab07_style_doxy".

+ Pass: Check that directory "docs" exists.

+ Pass: Check that file "docs/Doxyfile" exists.


#### .gitignore configured properly

+ Pass: Check that file/directory "html" does not exist.

+ Pass: Check that file/directory "latex" does not exist.


#### Google Style Compliance

+ Pass: Check that file "src/mainpage.h" exists.

+ Pass: Ignoring mainpage.h



+ Fail: Cpplint checking for for Google C++ compliance

/export/scratch/cpplint-sherv029/./src/passenger.h:0:  No copyright message found.  You should have a line: "Copyright [year] <Copyright Owner>"  [legal/copyright] [5]
/export/scratch/cpplint-sherv029/./src/passenger.h:1:  #ifndef header guard has wrong style, please use: SRC_PASSENGER_H_  [build/header_guard] [5]
/export/scratch/cpplint-sherv029/./src/passenger.h:19:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
/export/scratch/cpplint-sherv029/./src/passenger.h:19:  At least two spaces is best between code and comments  [whitespace/comments] [2]
/export/scratch/cpplint-sherv029/./src/passenger.h:20:  public: should be indented +1 space inside class Passenger  [whitespace/indent] [3]
/export/scratch/cpplint-sherv029/./src/passenger.h:31:  Constructors callable with one argument should be marked explicit.  [runtime/explicit] [5]
/export/scratch/cpplint-sherv029/./src/passenger.h:38:  private: should be indented +1 space inside class Passenger  [whitespace/indent] [3]
/export/scratch/cpplint-sherv029/./src/passenger.h:38:  "private:" should be preceded by a blank line  [whitespace/blank_line] [3]
/export/scratch/cpplint-sherv029/./src/passenger.h:50:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
/export/scratch/cpplint-sherv029/./src/passenger.h:51:  Closing brace should be aligned with beginning of class Passenger  [whitespace/indent] [3]

+ Skip: Getting mainpage.h back

  This test was not run because of an earlier failing test.


#### Doxygen

+ Pass: Change into directory "docs".

+ Pass: Generating documentation by running doxygen

+ Pass: Check that file "html/classPassenger.html" exists.

+ Pass: Check that file "html/classPassengerFactory.html" exists.

