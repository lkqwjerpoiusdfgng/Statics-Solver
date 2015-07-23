/********************************************
 *             Statics Solver               *
 ********************************************
 *	
 *		 Version: 0.1 (initial stages)
 *		  Author: Craig Medlin (PR0ficiency)
 *			      http://www.CraigMedlin.com
 *		 License: MIT
 * Last Modified: July 22, 2015
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
#include <iomanip>		// std::setw

using namespace std;

// Forward declarations
bool setTitle(string, float);
void showWelcome(float, string);
bool showMenu();

/* MAIN PROGRAM FUNCTION */
int main(void)
{
	/* Program Initialization */

	// Housekeeping Variables
	const float VERSION = 0.1f;			// Program version number
	const string LAST_MODIFIED 
		= "July 22, 2015";				// Date last modified
	const string CONSOLE_TITLE			
		= "Statics Solver - Version ";  // Text title for console window
	bool finished = false;				// For Menu Loop below

	// Set console title
	if (!setTitle(CONSOLE_TITLE, VERSION)) 
	{
		throw runtime_error("FATAL ERROR: Unable to set console title");
	}

	// Display welcome information
	showWelcome(VERSION, LAST_MODIFIED);

	/* Program Menu Loop */

	do {
		finished = showMenu();
	} while (!finished);

	system("pause");

	return 0;
} // END main()

/*	setTitle() Function: Sets the console window title. 
 *
 *  - Accepts two parameters:
 *		title: String that acts as the main part of the title 
 *	  version: Float value of program version number
 *
 *		RETURNS true on success
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

void showWelcome(float version, string lastModified)
{
	// Local formatting variables
	const char SEPARATOR = ' ';
	const int TITLE_WIDTH = 18;
	const int DATA_WIDTH = 32;
	ios::fmtflags f(cout.flags());
	
	// Display program information
	for (int i = 0; i < 50; i++) { cout << "*"; }
	cout << "\n";
	for (int i = 0; i < 18; i++) { cout << " "; }
	cout << "Statics Solver\n";
	for (int i = 0; i < 50; i++) { cout << "*"; }
	cout << "\n\n";

	cout << right << setw(TITLE_WIDTH) <<  "Version: ";
	cout << left <<   version << " (initial stages)\n";
	cout << right << setw(TITLE_WIDTH) <<  "Author: ";
	cout << left <<   "Craig Medlin\n";
	cout << right << setw(TITLE_WIDTH) <<  " ";
	cout << left <<   "www.craigmedlin.com\n\n";
	cout << right << setw(TITLE_WIDTH) <<  "License: ";
	cout << left <<   "MIT\n";
	cout << right << setw(TITLE_WIDTH) <<  "Last Modified: ";
	cout << left <<   lastModified << "\n\n";
	cout << right << setw(TITLE_WIDTH) <<  "Description: ";
	cout << left <<   "A command-line, Windows-based\n";
	cout << right << setw(TITLE_WIDTH) <<  "";
	cout << left <<   "C++ program to solve typical\n";
	cout << right << setw(TITLE_WIDTH) <<  "";
	cout << left <<   "problems from introductory\n";
	cout << right << setw(TITLE_WIDTH) <<  " ";
	cout << left <<   "engineering statics.";

	cout.flags(f);
	cout << "\n\n\n";

	system("pause"); // Wait for keypress
	system("cls");	 // Clear console
}


/* showMenu() Function: Display main menu and initiate program functions */
bool showMenu()
{
	// Local variables
	int selection = 0;
	
	// Display header information
	for (int i = 0; i < 50; i++) { cout << "*"; }
	cout << "\n";
	for (int i = 0; i < 11; i++) { cout << " "; }
	cout << "Statics Solver: Main Menu\n";
	for (int i = 0; i < 50; i++) { cout << "*"; }
	cout << "\n\n\n";
	
	// Menu instructions	
	cout << "Please choose one of the following options\n"
		<< "by pressing the number corresponding to the\n"
		<< "item you wish to choose and pressing enter.\n\n";

	// Menu options
	cout << "1. Solve a basic statics problem\n"
		<< "2. Display Program Information\n"
		<< "3. Display Program Help\n"
		<< "4. Exit the program\n\n\n";

	// Get selection
	cout << "Pleae enter your selection: ";
	cin >> selection;

	// Handle selection
	switch (selection)
	{

		case 1:			// Solve Basic Statics Problem
			break;

		case 2:			// Display Program Info
			break;

		case 3:			// Display Program Help
			break;

		case 4:			// Exit the Program 
			exit(0);
			break;

		default: 
			cout << "You did not enter a valid option. Please\n"
				<< "review the instructions and try again.\n";
			system("pause");
			break;
	}

	return 1;
}