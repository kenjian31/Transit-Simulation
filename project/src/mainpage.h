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
 *
*
*
* Iteration 2
* Main purpose for this iteration is to add observe pattern and startegy pattern
* observe pattern allow user to view single bus's data by click on that buses
* By click use will see :
* Position
* Passenger number
* Bus size
*
* Strategy Pattern will automacilly generate three kind of bus by time
* 6am or later but before 8 am
* Deploy the bus using strategy 1
* 8am or later but before 3pm
*	Deploy the bus using strategy 2
* 3pm or later but before 8pm
* Deploy the bus using strategy 3
* Otherwise
*	Deploy a small bus
*
* The deployment strategies you should implement are as follows:
* Strategy 1 deploys busses in the following repeating sequence:
* Small, Regular, Small, Regular, etc. (the sequence keeps repeating)
* Strategy 2 deploys busses in the following repeating sequence:
* Regular, Large, Regular, Large, etc. (the sequence keeps repeating)
* Strategy 3 deploys busses in the following repeating sequence:
* Small, Regular, Large, Small, Regular, Large, etc. (the sequence keeps
* repeating)
*
*  Designing and Implementing the Observer Pattern :
* In order to degin observer pattern we need to draw a UML to understand
* the relationship of each class, like the UML showed below:
* \image html Observer_UML.jpg
* Observer pattern uses three actor classes. Subject,
* Observer and Client. Subject is an object having methods to attach and detach observers to a client object.
* We have created an abstract class Observer and a concrete class Subject that is extending class Observer. 
* And observe pattern is helpful for program to check data in every related class.
*
* Iteration 3
* In this iteration we implement singleton and decorator pattern to allow the simulator to print clear data to csv file and shows
* different color of in coming bus and out going bus\
*
* \section   All new Classes and method for iteration3
* New classes that I created: FileWriterManager, FileWriter, Util, SObservable, SObserver, SetColor, Ibus,
* FileWriterManager is desiged for implement singleton Pattern
*
* FileWriter is desiged for write content in the csv FileWriter
*
* Util is designed for split the content to a correct formate to write in csv File
*
* SObservable is made to sign each stop data to the Server
*
* SObserver is made to notify the server when stop data been send to server
*
* Next I will talk about decorator pattern:
* In gerneral, the disadvantage and advantage decorator pattern show below:
*
* Advantage:
* - The decorator pattern can be used to make it possible to extend (decorate) the functionality of a certain object at runtime.
* - The decorator pattern is an alternative to subclassing. Subclassing adds behavior at compile time,
* and the change affects all instances of the original class; decorating can provide new behavior at runtime for individual objects.
* - Decorator offers a pay-as-you-go approach to adding responsibilities. Instead of trying to support all foreseeable features in a complex,
* customizable class, you can define a simple class and add functionality incrementally with Decorator objects.
*
* Disadvantages:
* Decorators can complicate the process of instantiating the component because you not only have to instantiate the component,
* but wrap it in a number of decorators.
* It can be complicated to have decorators keep track of other decorators, because to look back into multiple layers of the decorator chain starts to
* push the decorator pattern beyond its true intent. 
*
* The structure of decorate pattern show as below:
* \image html current_system.jpeg
*
* Next step I will discuss two alternate implementations of the decorator pattern:
* 
 * 1. Decorator Architectures -Version1- (I used)
 * This version put Decorate color and intensity together in the BusDecorator. and the IBus
 * act like a connecter for the IObservable , The Bus class and the BusDecorator. Both Intensity
 * and color implemented in BusDecorator.
 *   1. Pros:
 *     It is somehow similar to the pattern that I used, except it use a Decorates Color
 * and Intensity in the same class. it kind of single-responsibility principle , almost all
 * class has their own responsibility. It also has a IBus interface that is functional for
 * communicate between clent, Bus and IObserver. It follow the open/closed principle Open
 * closed principle it open for extension and the BusDecorator has extended class that contains
 * different methods. from the angle of cohesion and coupling, it is well organized and closely
 * related.
 *   2. Cons:
 *     This Decorate pattern is not too specific, it put the color and the intensity in the same class
 * which violate the "a class should only have a single responsibility" and it is not fulfill the
 * interface segregation principle it is not "many client-specific interfaces are better than
 * one general-purpose interface"
 *
 * \subsection   The Decorator Architectures - Version2
 *   1. Pros:
 *   The reason I choose this method is because it is the most effective and understandable
 * Decorator Pattern among this two methods. It follow the single responsibility principle: every class
 * should have a single responsibility or single job. The BusColorDecorator class control the
 * color of the Bus based on the number of people on the bus. and the BusIntensityDecorator
 * control the intensity of the color. In addition, they all all follow the open/closed principle
 *  they both open for extension/closed for modification. And the BusDecorator are able to be extend
 *  as the BusIntensityDecorator and BusColorDecorator. Its follow the cohesion rule and every classes
 * is arranged and connected in order. The design is closed to change but open to extension. The
 * IObservable class include the bus data and the IBus is a interface that make a connection between
 * the IObservable and the Bus Decorator.
 *   2. Cons:
 *     The disadvantage is that I have to wrtie two seperat Decorator for the bus Decorator, one
 * for the Bus indensity, and one for the bus color. In a word, it is not so simple enough . Like
 * simple sytems composed of simple components will work the best, it is not the simplest one.
 * \section Discuss  Discussion - Observer Pattern
 *  I write a Observer pattern for the simulation, which is a software design pattern
 * in which an object(Bus object in this case), called the subject. I also write a
 * Iobservable, which maintains a list of its dependents(Bus data). In the Iobservable, I
 * create three methods, the first one is:\
 *```
 * void RegosterObserver(IObserver *observer){
 * observer_.push_back(observer);
 * }
 *```
 * The RegosterObserver method will follow the observer object(subject) and pushback the
 * subject as soons as it was called.
 *```
 * void ClearObservers(){
 *    observer_.clear();
 * }
 *```
 * The second method is the ClearObservers() method , which will do the clear commands
 *once it was called
 *```
 *void Notify(BusData *info);
 *```
 * the last method in the Iobservable is the NotifyObservers method, it is similar to the
 * update method that we used in the num_passengers, just different objects were used
 * The Observers will notifies them automatically of any state changes(in this case is
 * by calling one of the methods listed above) Generally speaking, In the Observer Pattern
 * , the Observer are aware of the Bus subject, also the Subject maintains a record of the ClearObservers
 *. Observer pattern is mostly implemented in a synchronous way. Like the Subject calls the
 * appropriate method of all its observrs when a bus object has changed, which it will
 * be notified at the first time.
 * As shown on the diagim above, I add the new classes and new method to the UML that I created
 * before, And the connections are made by different shape of arrows. The benefit of Using
 * observer pattern is provides notification to a set of intetesed bus objects that
 * relevant data have changed, which does not require the data server to have any a priori
 * knowledge about its clients(objects). Instread, the clients simply offer a subscription function
 * as showned above to dynamicallt add or clear themselves based on the notifications. Data are
 * sent whenever new data arrive and notified. The observer pattern optimizes the interaction between
 * object and the server. In the final UML , I update all the pattern that I added and also inclue their
 * connections one by one, I added a stop_observer pattern and an Bus Decorator pttern that consists
 * of two seperate Decorate pattern named BusIntensityDecorator and BusColorDecorator, they can do allthe job.
 * The benfit of using those pattern is make my simulation more effective and more readable among
 * audience.
 * \section install_sec Analyze of the simulation
 *   1. The simulator consist of several classes, most of them are relate to the
 *  University of Minnesota bus sytem. Classes are inherit from Bus class, Route
 * class and Stop classes. Bus class contain the most methos, which include name
 * outgoing and incoming route and when the move method is called, it automatically
 * trigger the stop class, and at the same time, the stop class will execute the
 * update() method. The GeneratePassengers method will also be applied to update
 * the number of passengers. In the route class, it will call the stop funcitons,
 * to be specific, it wil call ToNextStop() if not "skip", GetTotalRouteDistance()
 * to store the total distance the bus travaled.
 *
 *   2.  I create bus_facotry based on the passenger_factory that given in the Code
 * and create three classes (smallbus, regularbus, large bus) extends from the Bus
 * class. The bus__factory class randomly generate a int that used to determine then
 * bustype that and return  a new object from three subbus class. The bustype is
 * different based on their capacity (30 for the small, 60 for the regular, and 90
 * for the large)
 *   3.  In the simulation, I add a Pause, Resume buttom besides the start button, and it
 * is useful when it comes to the bus system. In the end, I also include a "skip"
 * case in the move() method in the Bus class.
 *   4.  The Decorate pattern that I made fulfill the requirement to change the color
 * and intensity based on the real time data, and I follow the "SOLID" rules, make one
 * class do one job and also let them closed to change and keep the correctness.
 * \subsection config Conclusion
 *   I finished the project but there are still a lot to impove in the future. I would
 * like to write a more specific BusFactory class that come with more details.
 * In addition, more real world circumstance should be take in to consideration, like
 * traffic condition and  holiday schedule. 
*/
#endif  // SRC_MAINPAGE_H_
