
#ifndef MY_WEB_SERVER_COMMAND_H
#define MY_WEB_SERVER_COMMAND_H

#include "config_manager.h"
#include "visualization_simulator.h"

#include "my_web_server_session.h"
#include "my_web_server_session_state.h"
#include "my_web_server.h"
#include "data_structs.h"

#include <vector>

class MyWebServerSession;
class MyWebServerSessionState;

class MyWebServerCommand {
public:
	virtual ~MyWebServerCommand() {}
	virtual void execute(MyWebServerSession* session, picojson::value& command, MyWebServerSessionState* state) = 0;
};


///***** * * * * * COMMANDS * * * * * ******///

class GetRoutesCommand : public MyWebServerCommand {
    public:
	    GetRoutesCommand(MyWebServer* ws);
        void execute(MyWebServerSession* session, picojson::value& command, MyWebServerSessionState* state) override;
    private:
        MyWebServer* myWS;
};

class GetBussesCommand : public MyWebServerCommand {
    public:
	    GetBussesCommand(MyWebServer* ws);
	    void execute(MyWebServerSession* session, picojson::value& command, MyWebServerSessionState* state) override;
    private:
        MyWebServer* myWS;
};

class StartCommand : public MyWebServerCommand {
    public:
        StartCommand(VisualizationSimulator* sim);
        void execute(MyWebServerSession* session, picojson::value& command, MyWebServerSessionState* state) override;
    private:
        VisualizationSimulator* mySim;
        std::vector<int> timeBetweenBusses;
        int numTimeSteps;
};

class UpdateCommand : public MyWebServerCommand {
    public:
        UpdateCommand(VisualizationSimulator* sim);
        void execute(MyWebServerSession* session, picojson::value& command, MyWebServerSessionState* state) override;
    private:
        VisualizationSimulator* mySim;
};

class InitRoutesCommand : public MyWebServerCommand {
    public:
        InitRoutesCommand(ConfigManager* cm);
        void execute(MyWebServerSession* session, picojson::value& command, MyWebServerSessionState* state) override;
    private:
        ConfigManager* cm;
};
/**
 * @brief The main class represent pause/resume batton.
 *
 * Calls to \ref PauseCommand to implement pause on the web
 */
class PauseCommand : public MyWebServerCommand {
    public:
			/**
			* @brief this class represent of pause batton.
			*
			* @param[in] VisualizationSimulator* sim, left bound (not-inclusive)
			*
			*/
        PauseCommand(VisualizationSimulator* sim);
				/**
				* @brief this class represent exection of pause batton.
				*
				* @param[in] sim, left bound (not-inclusive)
				* @param[in] command, left bound (not-inclusive)
				* @param[in] state, left bound (not-inclusive)
				*
				*/
        void execute(MyWebServerSession* session, picojson::value& command, MyWebServerSessionState* state) override;
    private:
        VisualizationSimulator* mySim;
        std::vector<int> timeBetweenBusses;
        int numTimeSteps;
};

#endif // MY_WEB_SERVER_COMMAND_H
