#include "AbstractLogger.h"
#include "ConsoleLogger.h"
#include "ErrorLogger.h"
#include "FileLogger.h"
using namespace std;

int main(void)
{
	AbstractLogger* errorLogger = new ErrorLogger(ERROR);
	AbstractLogger* fileLogger = new FileLogger(DEBUG);
	AbstractLogger* consoleLogger = new ConsoleLogger(INFO);

	errorLogger->setNextLogger(fileLogger);
	fileLogger->setNextLogger(consoleLogger);

	errorLogger->logMessage(INFO, "This is an information.");

	errorLogger->logMessage(DEBUG, "This is an debug level information.");

	errorLogger->logMessage(ERROR, "This is an error information.");

	delete errorLogger;
	delete fileLogger;
	delete consoleLogger;

	return 0;
}