/********************************************
 *             Statics Solver               *
 ********************************************
 *	
 *		 Version: 0.1 (initial stages)
 *		  Author: Craig Medlin (PR0ficiency)
 *			      http://www.CraigMedlin.com
 *		 License: MIT
 * Last Modified: July 18, 2015
 *
 *	 Description: A command-line, Windows-based 
 *				  C++ program to solve typical 
 *				  problems from introductory 
 *				  engineering statics.
 *
 */

/* INCLUDES */
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <string>
#include <tchar.h>
#include <strsafe.h>
#include <conio.h>

using namespace std;

// Pre-declaration
bool setTitle(string, float);
void welcome();

/* MAIN PROGRAM FUNCTION */
int main(void)
{
	/* Program initialization */

	// Housekeeping Variables
	const float VERSION = 0.1f;			// Program version number
	const string CONSOLE_TITLE			
		= "Statics Solver - Version ";  // Text title for console window

	// Set console title
	if (!setTitle(CONSOLE_TITLE, VERSION)) 
	{
		throw runtime_error("FATAL ERROR: Unable to set console title");
	}

	// Display welcome information
	welcome();

	system("pause");

	return 0;
} // END main()

/*	setTitle() Function: Sets the console window title. 
 *
 *  - Accepts two parameters:
 *		title: String that acts as the main part of the title 
 *	  version: Float value of program version number
 *
 *		Returns true on success
 */

bool setTitle(string title, float version)
{
	// Temp variables
	char buffer[60];
	string newTitle;
	bool success = false;

	// Format title
	snprintf(buffer, sizeof(buffer), "%s %.1f", title.c_str(), version);

	// Store in string
	newTitle = buffer;

	// Set console title
	success = (!SetConsoleTitle(newTitle.c_str()) ? false : true);

	return success;
}

/* welcome() Function: Displays general program information */

void welcome()
{

}