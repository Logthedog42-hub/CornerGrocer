#include "GroceryTracker.h"
#include <fstream>
#include <iostream>

/*
-----------------------------------------------------------
LoadData
-----------------------------------------------------------
Reads each word from the input file and updates the
frequency map. Each time an item is encountered, its
associated count is automatically incremented.
-----------------------------------------------------------
*/
void GroceryTracker::LoadData(const std::string& fileName) {
    std::ifstream inputFile(fileName);
    std::string item;

    // Continue reading each grocery item until end of file
    while (inputFile >> item) {
        frequencyMap[item]++;
    }

    inputFile.close();
}

/*
-----------------------------------------------------------
WriteBackupFile
-----------------------------------------------------------
Creates a persistent backup data file that stores the
entire frequency map. This file is generated at program
startup without any user input for security and recovery.
-----------------------------------------------------------
*/
void GroceryTracker::WriteBackupFile(const std::string& fileName) {
    std::ofstream outputFile(fileName);

    for (const auto& pair : frequencyMap) {
        outputFile << pair.first << " " << pair.second << std::endl;
    }

    outputFile.close();
}

/*
-----------------------------------------------------------
GetItemFrequency
-----------------------------------------------------------
Returns the frequency of a user-requested item. Uses safe
lookup to prevent runtime errors if the item does not
exist in the dataset.
-----------------------------------------------------------
*/
int GroceryTracker::GetItemFrequency(const std::string& item) const {
    if (frequencyMap.count(item)) {
        return frequencyMap.at(item);
    }

    return 0;
}

/*
-----------------------------------------------------------
DisplayAllFrequencies
-----------------------------------------------------------
Displays all grocery items and their frequencies in a
numerical list format for clear readability.
-----------------------------------------------------------
*/
void GroceryTracker::DisplayAllFrequencies() const {
    for (const auto& pair : frequencyMap) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}

/*
-----------------------------------------------------------
DisplayHistogram
-----------------------------------------------------------
Displays a graphical representation of the frequency
data using asterisks. Each asterisk represents one unit
of frequency.
-----------------------------------------------------------
*/
void GroceryTracker::DisplayHistogram() const {
    for (const auto& pair : frequencyMap) {
        std::cout << pair.first << " ";
        for (int i = 0; i < pair.second; i++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
