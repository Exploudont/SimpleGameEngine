#ifndef _SIMPLE_GAME_ENGINE_LOGGING_SYSTEM
	#define _SIMPLE_GAME_ENGINE_LOGGING_SYSTEM 1

#include <iostream>
#include "../types.h"

namespace LoggingSystem {
	
	static b8 enable = true;
	
	enum Level {
		INFO = 0,
		WARNING = 1,
		ERROR = 2,
		FATAL = 3,
		DEBUG = 4
	};
	
	static const char* levels[5] = {
		"[  Info   ] ",
		"[ Warning ] ",
		"[  Error  ] ",
		"[  Fatal  ] ",
		"[  Debug  ] "
	};
	
	class Logger {
		public:
			static void log(const char* msg, enum Level l)
			{
				if(enable) std::cout << levels[l] << msg << '\n';
			}
			
	};
	
};



#define DEBUG_ENALBE

#ifdef DEBUG_ENALBE
	#define LOG_INFO(msg)		LoggingSystem::Logger::log(msg, LoggingSystem::Level::INFO)
	#define LOG_WARNING(msg)	LoggingSystem::Logger::log(msg, LoggingSystem::Level::WARNING)
	#define LOG_ERROR(msg)		LoggingSystem::Logger::log(msg, LoggingSystem::Level::ERROR)
	#define LOG_FATAL(msg)		LoggingSystem::Logger::log(msg, LoggingSystem::Level::FATAL)
	#define LOG_DEBUG(msg)		LoggingSystem::Logger::log(msg, LoggingSystem::Level::DEBUG)
#else
	#define LOG_INFO(msg)
	#define LOG_WARNING(msg)
	#define LOG_ERROR(msg)
	#define LOG_FATAL(msg)
	#define LOG_DEBUG(msg)
#endif

#endif
