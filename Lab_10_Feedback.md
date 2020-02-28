### Feedback for Lab 10

Run on February 28, 14:52:21 PM.


### Necessary Files and Structure

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab10_advanced_git" exists.


### Git Usage

+ Pass: Run git ls-remote to check for existence of specific branch- Branch devel found

+ Pass: Checkout devel branch.



+ Pass: Run git ls-remote gather all branches in repo

		91b1fc418588a97d49e36ad2045b875df71a8fee	refs/heads/devel

		0e48e60bfa35a5ca23c5b86d06e3d23db8e9f8bf	refs/heads/fix/01-compilation-errors

		da94dd27619650bce9a73d935794fd569c66c25d	refs/heads/master



+ Pass: Checking for the correct number of branches

Insufficient branches found (found=1, required=2):

fix/01-compilation-errors


#### Counting commits on devel

+ Pass: Checkout devel branch.



+ Pass: Gather commit history

		[Jian Wang] 2020-02-28 (HEAD -> devel, origin/devel) lab10 complete 

		[Jian Wang] 2020-02-28 lab10 complete 

		[Jian Wang] 2020-02-28 lab10 complete 

		[Jian Wang] 2020-02-28 lab10 complete 

		[Jian Wang] 2020-02-28 Merge branch 'fix/01-compilation-errors' into devel 

		[Jian Wang] 2020-02-28 (origin/fix/01-compilation-errors, fix/01-compilation-errors) lab10 replace 

		[Jian Wang] 2020-02-28 lab10 src delete 

		[Jian Wang] 2020-02-28 replace src 

		[Jian Wang] 2020-02-28 delete src 



		[Jian Wang] 2020-02-28 lab09 

		[Jian Wang] 2020-02-28 lab09 







		[Jian Wang] 2020-02-24 Merge branch 'support-code' of github.umn.edu:umn-csci-3081-s20/csci3081-shared-upstream 








		[Jian Wang] 2020-02-24 fixed 















		[Jian Wang] 2020-02-22 lab08 fix 



		[Jian Wang] 2020-02-22 lab08 fixed 


		[Jian Wang] 2020-02-22 fixed 


		[Jian Wang] 2020-02-22 fixed 



		[Jian Wang] 2020-02-22 fixed 


		[Jian Wang] 2020-02-22 Merge branch 'master' of https://github.umn.edu/umn-csci-3081-s20/repo-wang8635 

		[Jian Wang] 2020-02-22 fixed 


		[Jian Wang] 2020-02-22 fixed 



		[Jian Wang] 2020-02-22 lab08 google test complete 

		[Jian Wang] 2020-02-22 Merge branch 'master' of https://github.umn.edu/umn-csci-3081-s20/repo-wang8635 























		[Jian Wang] 2020-02-20 Merge branch 'support-code' 

		[Jian Wang] 2020-02-20 Merge branch 'support-code' of github.umn.edu:umn-csci-3081-s20/csci3081-shared-upstream into support-code 















+ Pass: Check git commit history
Sufficient commits (found=25,required=4)


### Git Issue Usage

+ Pass: Configuring GHI

+ Pass: Run ghi for total number of open issues in Github repo (Found: 0)

+ Pass: Run ghi for total number of closed issues in Github repo (Found: 2)

[CLOSED issue #2] :  google style [enhancement]

[CLOSED issue #1] :  cpplint compilation  [bug] 1





+ Pass: Run ghi for total number of issues in Github repo (Found: 2, Expected: 2) 

 [OPEN issue #] : 

[CLOSED issue #2] :  google style [enhancement]

[CLOSED issue #1] :  cpplint compilation  [bug] 1

 




### Test that code on  devel compiles

+ Pass: Checkout devel branch.



+ Pass: Check that directory "project/src" exists.

+ Pass: Change into directory "project/src".

+ Pass: Check that file "makefile" exists.

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>==== Auto-Generating Dependencies for bus.cc. ====
==== Compiling bus.cc into /project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/bus.o. ====
==== Auto-Generating Dependencies for random_passenger_generator.cc. ====
==== Compiling random_passenger_generator.cc into /project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/random_passenger_generator.o. ====
==== Auto-Generating Dependencies for passenger_loader.cc. ====
==== Compiling passenger_loader.cc into /project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/passenger_loader.o. ====
==== Auto-Generating Dependencies for passenger_factory.cc. ====
==== Compiling passenger_factory.cc into /project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/passenger_factory.o. ====
==== Auto-Generating Dependencies for passenger.cc. ====
==== Compiling passenger.cc into /project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/passenger.o. ====
==== Auto-Generating Dependencies for passenger_generator.cc. ====
==== Compiling passenger_generator.cc into /project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/passenger_generator.o. ====
==== Auto-Generating Dependencies for passenger_unloader.cc. ====
==== Compiling passenger_unloader.cc into /project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/passenger_unloader.o. ====
passenger_unloader.cc:8:5: error: prototype for int PassengerUnloader::UnloadPassengers(std::__cxx11::list<Passenger*>&, Stop*) does not match any in class PassengerUnloader
 int PassengerUnloader::UnloadPassengers(std::list<Passenger *>& passengers,
     ^~~~~~~~~~~~~~~~~
In file included from passenger_unloader.cc:6:0:
../src/passenger_unloader.h:18:7: error: candidate is: int PassengerUnloader::UnloadPassengers(std::__cxx11::list<Passenger*>*, Stop*)
   int UnloadPassengers(std::list<Passenger*>* passengers,
       ^~~~~~~~~~~~~~~~
makefile:102: recipe for target '/project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/passenger_unloader.o' failed
make: *** [/project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/passenger_unloader.o] Error 1
</pre>



