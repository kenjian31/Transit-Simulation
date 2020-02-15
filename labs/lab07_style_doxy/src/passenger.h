/**
 * @file passenger_.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef SRC_PASSENGER_H_
#define SRC_PASSENGER_H_


/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <iostream>

#include <string>

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/


class Passenger {  // : public Reporter {
 public:
   /**
    * @brief the main class delcare all function wiil be used
    *
    * This function will be used for simulation purposes.
    *
    * @param[in] curr_stop Current stop, left bound (not-inclusive)
    * @param[in] last_stop Last stop, right bound (inclusive)
    *
    * @return Passenger object with name and destination.
    */
  explicit Passenger(int = -1, std::string = "Nobody");
  void Update();
  void GetOnBus();
  int GetTotalWait() const;
  bool IsOnBus() const;
  int GetDestination() const;
  void Report() const;

 private:
   /**
    * @brief Process of transit predure
    *
    * @return Randomized passenger name.
    */
  std::string name_;
  int destination_stop_id_;
  int wait_at_stop_;
  int time_on_bus_;
  int id_;
  static int count_;  // global count, used to set ID for new instances
};
#endif  // SRC_PASSENGER_H_
