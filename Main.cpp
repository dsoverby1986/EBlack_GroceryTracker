#include "GroceryTracker.cpp"

int main() {
	GroceryTracker tracker;				// creation of the tracker object to allow to the class' attributes
	tracker.printMenuOptions();

	// prompt the user to select a menu option
	tracker.getUserMenuOption();

	// switch case to handle 
	switch (tracker.getSelectedMenuOption()) {
		case 1: {
			tracker.readFile();
			cout << endl << "Enter an item to find its frequency:" << endl;
			cin >> tracker.item;
			cout << " " << endl;
			cout << tracker.item << " apppears " << tracker.getItemFrequency() << " times." << endl;
			break;
		}
		case 2: {
			tracker.readFile();
			tracker.printAllItemFrequencies();
			break;
		}
		case 3: {
			tracker.readFile();
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