/**
 * @file passenger_.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef SRC_MAINPAGE_H_
#define SRC_MAINPAGE_H_
/*! \mainpage My Personal Index Page : Project
 *
 * \section intro_sec Introduction:
 * the project is about building transit simulation. The program can be obtain in github
 * https://github.umn.edu/umn-csci-3081-s20/csci3081-shared-upstream/tree/support-code/labs/lab09_project_intro 
 * using git pull command to obtain the project into local machine, the configure of mechine list below:
 * Server: Dell PowerEdge R210
 * Processor: Quad-Core Intel® Xeon™ E3-1220V2 Processor @ 3.10GHz
 * Memory: 16GB RAM 
 * with linux system.
 *
 * the program is execuated by following step:
 * Step by step for instructions for CSE Labs machines or vole users 
 * <port_number> below should be a number above 8000 that includes the last 3 digits of your student id.
 * So, if your student id number is: 1459345, use 8345, or 9345
 *
 * Navigate to base project directory(project/)
 * Make and run the server:
 * $ cd src
 * $ make
 * $ cd ..
 * $./build/bin/vis_sim <port_number>
 * You must run by doing ./build/bin/vis_sim <port_number>.
 * You cannot cd to bin/ and run ./vis_sim <port_number>
 * Run your browser on vole or CSE Labs machine, and enter following address in the address bar of your browser (Firefox/Chrome):
 * http://127.0.0.1:<port_number>/web_graphics/project.html
 * Step by step instructions for ssh users :
 *
 * You can SSH using a Windows machine with Git Bash.
 *
 * **<port_number> below should be a number above 8000 that includes the last 3 digits of your student id.**
 * **So, if your student id number is: 1459345, use 8345, or 9345**
 *
 * ssh -L <port number>:127.0.0.1:<port_number> <x500>@<cse_labs_computer>.cselabs.umn.edu
 * Navigate to base project directory(project/)
 * make and start server:
 * $ cd src
 * $ make
 * $ cd ..
 * $./build/bin/vis_sim <port_number>
 * You must run by doing ./build/bin/vis_sim <port_number>.
 * You cannot cd to bin/ and run ./vis_sim <port_number>
 * Navigate to the following address into the address bar of a browser (Firefox/Chrome) running on your LOCAL machine (e.g, your PC):
 * http://127.0.0.1:<port_number>/web_graphics/project.html
 *
 * program can be compile by:
 * $ cd src
 * $ make
 *
 * the program can be viewed by browser after execuated:
 * After running command above, open browser and type in the URL shows above.
 * After browser window opened, prass start batton to start transit simulator
 *
 * The major improvement in iteration 1 is adding new class bus factory. The main functionality of bus factory is randomly generate
 * 3 kinds of bus which are small, regular, large. To implement the bus factory, I first create smallbus, regularbus and largebus classes
 * that inhirent from Bus class. There are two way to implement bus factory which are concrete class and abstract class
 * An abstract class is declared using abstract modifier. Concrete class should not be declared using abstract keyword, on doing so, it will also become an abstract class.
 * Instantiation: An abstract class cannot be instantiated directly, i.e. object of such class cannot be created directly using new keyword.
 * An abstract class can be instantiated either by a concrete subclass or by defining all the abstract method along with the new statement.
 * A concrete class can be instantiated directly, using a new keyword. 
 * A concrete class is an ordinary class which has no purely virtual functions and hence can be instantiated.  It is main reason why I choose concrete
 * class in this project. I believe that concrete make furture edition of the project more easier
 * \image html ConcreteBusFactory.png
 * \image html AbstractBusFactory.png
*/
#endif  // SRC_MAINPAGE_H_
