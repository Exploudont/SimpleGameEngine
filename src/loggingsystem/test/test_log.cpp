#include <stdio.h>

#include "../Logger.h"

int main(int argc, const char* argv[]) {

	const char* msg = "test";


	
	LOG_INFO(msg);
	LOG_WARNING(msg);
	LOG_ERROR(msg);
	LOG_FATAL(msg);
	LOG_DEBUG(msg);


	LoggingSystem::enable = false;

	LOG_INFO(msg);
	LOG_WARNING(msg);
	LOG_ERROR(msg);
	LOG_FATAL(msg);
	LOG_DEBUG(msg);

	
	return 0;
}
