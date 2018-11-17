//============================================================================
// Name        : hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <DLog.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	DLog myLog;
	string message;

//	myLog.setLogFileName ("jon.txt");
//	myLog.setErrorLevel(logInformation);
	myLog.logValue = logInformation;
	myLog.logFileName = "/home/pi/Desktop/log.txt";
	myLog.printFile = true;
	myLog.printScreen = true;
	myLog.printTime = true;

	message = "this is my Log message ";
//	message += std::to_string(100);

	myLog.print(logInformation, (string)"this is my message");

	myLog.print(logInformation, message);
	return 0;
}
