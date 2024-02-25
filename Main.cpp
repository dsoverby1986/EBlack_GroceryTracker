#include "GroceryTracker.cpp"

int main() {
	int selectedMenuOption;							// menu option entered by the user
	GroceryTracker tracker;				// creation of the tracker object to allow to the class' attributes
	tracker.printMenuOptions();

	// prompt the user to select a menu option
	cout << "Select a menu option to continue." << endl; 
	cin >> selectedMenuOption;


	// switch case to handle 
	switch (selectedMenuOption) {
	case 1: {
		tracker.readFile(); 
		cout << "Enter an item to find its frequency:" << endl;
		cin >> tracker.item;
		cout << " " << endl;
		cout << tracker.item << " apppears " << tracker.printItemFrequency(tracker.item) << " times." << endl;

		//tracker.writeBackupFile();
		break;
	}
	case 2: { 
		tracker.readFile();
		tracker.printAllItemFrequencies();
		break;
		
		/*cout << "All Items:" << endl;
		tracker.readFile();
		tracker.printAllItemFrequencies();
		break;*/
	}
	case 3: {
		tracker.printHistogram();
		tracker.writeBackupFile();
		break;
	}
	case 4: {
		break;
	}
	default: {
		cout << "That isn't a valid option. Please try again." << endl;
		cout << " " << endl;
	}

	}

}