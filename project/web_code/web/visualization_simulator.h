
#ifndef VISUALIZATION_SIMULATOR_H_
#define VISUALIZATION_SIMULATOR_H_

#include <vector>
#include <list>

#include "web_interface.h"
#include "config_manager.h"

class Route;
class Bus;
class Stop;
class BusFactory;

class VisualizationSimulator {
    public:
        VisualizationSimulator(WebInterface*, ConfigManager*);
        ~VisualizationSimulator();

        void Start(const std::vector<int>&, const int&);
        void Update();

        /**
				* @brief represent exection of pause flag to identif whether pause or resume.
				*
				*
				*/
        void Pause();

    private:
        WebInterface* webInterface_;
        ConfigManager* configManager_;

        std::vector<int> busStartTimings_;
        std::vector<int> timeSinceLastBus_;
        int numTimeSteps_;
        int simulationTimeElapsed_;

        std::vector<Route *> prototypeRoutes_;
        std::vector<Bus *> busses_;
        bool flag = false;
        int busId = 1000;
};

#endif // VISUALIZATION_SIMULATOR_H_
