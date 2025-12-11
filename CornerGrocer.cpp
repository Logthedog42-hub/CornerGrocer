#include <iostream>
#include "GroceryTracker.h"

using namespace std;

/*
===========================================================
Corner Grocer Program - Main Application
-----------------------------------------------------------
This program allows users to analyze grocery purchase data
to determine item frequency, display reports, and generate
a histogram for visual analysis. The program also creates
an automatic backup file upon startup.
===========================================================
*/
int main() {
    GroceryTracker tracker;

    // Load input data from the daily grocery transaction file
    tracker.LoadData("CS210_Project_Three_Input_File.txt");

    // Automatically generate the backup file at startup
    tracker.WriteBackupFile("frequency.dat");

    int choice = 0;

    /*
    -------------------------------------------------------
    Menu Loop
    -------------------------------------------------------
    Continuously displays the menu until the user selects
    the option to exit. This ensures controlled program
    execution and proper user interaction.
    -------------------------------------------------------
    */
    while (choice != 4) {
        cout << "\nCorner Grocer Menu" << endl;
        cout << "1. Search for an item frequency" << endl;
        cout << "2. Display all frequencies" << endl;
        cout << "3. Display histogram" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Menu Option One: Individual item lookup
            string item;
            cout << "Enter item name: ";
            cin >> item;
            cout << item << " frequency: "
                << tracker.GetItemFrequency(item) << endl;
        }
        else if (choice == 2) {
            // Menu Option Two: Full frequency list
            tracker.DisplayAllFrequencies();
        }
        else if (choice == 3) {
            // Menu Option Three: Histogram display
            tracker.DisplayHistogram();
        }
        else if (choice == 4) {
            // Menu Option Four: Exit program
            cout << "Exiting program." << endl;
        }
        else {
            // Input validation for invalid menu options
            cout << "Invalid option. Try again." << endl;
            cin.clear(); // clear the fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard bad input

            continue;  // restart loop cleanly
        }
    }

    return 0;
}
