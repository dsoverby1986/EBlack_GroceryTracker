#include "GroceryTracker.h"
#include <iostream>
#include <fstream>

void GroceryTracker::readFile() {
	ifstream inputFile("CS210_Project_Three_Input_File.txt");
	while (inputFile >> item) {
		itemFrequency[item]++;
	
	//ifstream inputFile; // the input file stream
	//// read items from the input file and stores its frequency in the map
	//inputFile.open("CS210_Project_Three_Input_File.txt");
	//	while (inputFile >> item) {
	//		++itemFrequency[item];
	}
}

void GroceryTracker::writeBackupFile() {
	ofstream outputFile("frequency.dat"); // the output file to backup data
	// write pairs of item and frequency to the output file to backup data
	for (auto i : itemFrequency) {
		outputFile << i.first << " " << i.second << endl;
	}
}

int GroceryTracker::printMenuOptions()
{
	cout << "-------------------------------------------------" << endl;
	cout << "--------------- The Corner Grocer ---------------" << endl;
	cout << "---------------- Grocery Tracker ----------------" << endl;
	cout << " " << endl;
	cout << "----------------- Menu Options: -----------------" << endl;
	cout << "1. Find the frequency of an item" << endl;
	cout << "2. Print a list all items and their frequencies" << endl;
	cout << "3. Print a histogram of all items" << endl;
	cout << "4. Exit" << endl;
	cout << "-------------------------------------------------" << endl;
	cout << " " << endl;

	return 0;
}

int GroceryTracker::printItemFrequency(string item) {
	return itemFrequency[item];
}

int GroceryTracker::printAllItemFrequencies() {	
	// ofstream outputFile("frequency.dat"); // the output file to backup data
	/*for (auto i : itemFrequency) {
		cout << i.first << " " << i.second << endl;
	}*/
	return 0;
}

int GroceryTracker::printHistogram() {
	/*for (auto i : itemFrequency) {
		cout << i.first << " ";
		for (int j = 0; j < i.second; ++j) {
			cout << "*";
		}
		cout << endl;
	}*/
	return 0;
}
