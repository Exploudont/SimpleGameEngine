#ifndef _SIMPLE_GAME_ENGINE_LOGGING_SYSTEM
	#define _SIMPLE_GAME_ENGINE_LOGGING_SYSTEM 1

#include <iostream>

namespace LoggingSystem {
	
	static bool enable = true;
	
	enum Level {
		INFO = 0,
		WARNING = 1,
		ERROR = 2,
		FATAL = 3,
		DEBUG = 4
	};
	
	static const char* levels[5] = {
		"Info",
		"Warning",
		"Error",
		"Fatal",
		"Debug"
	};
	
	class Logger {
		public:
			static void log(const char* msg, enum Level l) {
				if(enable) std::cout << "[ " << levels[l] << " ] " << msg << '\n';
			}
	};
	
};

#define LOG_INFO(msg)		LoggingSystem::Logger::log(msg, LoggingSystem::Level::INFO)
#define LOG_WARNING(msg)	LoggingSystem::Logger::log(msg, LoggingSystem::Level::WARNING)
#define LOG_ERROR(msg)		LoggingSystem::Logger::log(msg, LoggingSystem::Level::ERROR)
#define LOG_FATAL(msg)		LoggingSystem::Logger::log(msg, LoggingSystem::Level::FATAL)
#define LOG_DEBUG(msg)		LoggingSystem::Logger::log(msg, LoggingSystem::Level::DEBUG)


#endif