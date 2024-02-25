/*
Corner Grocer Grocery Tracker
Developer: Emily Black
February 24, 2024
*/

#ifndef EMILY_REPOS_EBLACK_CORNERGROCER_GROCERYTRACKER_H
#define EMILY_REPOS_EBLACK_CORNERGROCER_GROCERYTRACKER_H

#include <string>
#include <map>

using namespace std;

class GroceryTracker {
// private data members
private:
	int selectedMenuOption;
	map<string, int> itemFrequency;		// a map to store pairs of item and frequency
	inline int getIntFromUser(string prompt);


// public data members
public:
	string item;
	int quanity;
	inline void readFile();						// a function that reads the input file
	inline void writeBackupFile();				// a function that writes the backup file				
	inline int printMenuOptions();				// a function that outputs the menu options to the user
	inline int getItemFrequency();			// a function that prints the item's frequency
	inline int printAllItemFrequencies();		// a function that prints the frequencies of all items
	inline int printHistogram();				// a function that prints a histogram
	inline void getUserMenuOption();
	inline int getSelectedMenuOption();
};

#endif EMILY_REPOS_EBLACK_CORNERGROCER_GROCERYTRACKER_H