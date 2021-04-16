#include "Logger.h"


void LoggingSystem::Logger::log(const char* msg, enum LoggingSystem::Level l)
{
	if(LoggingSystem::enable)
		std::cout << LoggingSystem::levels[l] << msg << '\n';
}
