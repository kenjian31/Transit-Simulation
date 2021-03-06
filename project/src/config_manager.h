/**
 * @file bus.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_CONFIG_MANAGER_H_
#define SRC_CONFIG_MANAGER_H_

#include <vector>
#include <string>


class Route;
class ConfigManager {
 public:
   /**
    * @brief  is contructor that initialises Bus object automatically when it is created. 
    *
    * This function will be used for simulation purposes.
    *
    */
        ConfigManager();

        /**
         * @brief  is copy contructor that initialises route data automatically when it is created. 
         *
         * This function will be used for simulation purposes.
         *
         */
        ~ConfigManager();

        /**
         * @brief  read config.text file content  
         *
         * This function will be used for simulation purposes.
         *
         * @param[in] filename File Path, left bound (not-inclusive)
         *
         * @return Passenger object with name and destination.
         */
        void ReadConfig(const std::string filename);
        /**
         * @brief  Generatre Route object  
         *
         * This function will be used for simulation purposes.
         *
         *
         * @return route object.
         */
        std::vector<Route *> GetRoutes() const { return routes; }

 private:
        std::vector<Route *> routes;
};

#endif   // SRC_CONFIG_MANAGER_H_
