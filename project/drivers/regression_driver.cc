#include <ctime>
#include <iostream>
#include <fstream>
#include <random>
#include <string>

<<<<<<< HEAD
#include "r_local_simulator.h"
=======
#include "r_simulator.h"
>>>>>>> master

int main() {

  int rounds = 50; //Number of rounds of generation to simulate in test
<<<<<<< HEAD
  
=======

>>>>>>> master
  srand((long)1); //Seed the random number generator with the same seed every time!


  rLocalSimulator my_sim;
<<<<<<< HEAD
  
=======

>>>>>>> master
  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "         STARTING" << std::endl;
  std::cout << "        SIMULATION" << std::endl;
  std::cout << "*************************/" << std::endl;
<<<<<<< HEAD
  
  my_sim.Start();
  
=======

  my_sim.Start();

>>>>>>> master
  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "           BEGIN" << std::endl;
  std::cout << "          UPDATING" << std::endl;
  std::cout << "*************************/" << std::endl;
<<<<<<< HEAD
  
  for (int i = 0; i < rounds; i++) {
	  my_sim.Update();
  }
  
=======

  for (int i = 0; i < rounds; i++) {
	  my_sim.Update();
  }

>>>>>>> master
  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "        SIMULATION" << std::endl;
  std::cout << "         COMPLETE" << std::endl;
  std::cout << "*************************/" << std::endl;
<<<<<<< HEAD
  
=======

>>>>>>> master

  return 0;
}
