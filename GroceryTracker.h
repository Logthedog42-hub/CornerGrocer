#ifndef GROCERYTRACKER_H
#define GROCERYTRACKER_H

#include <map>
#include <string>

/*
===========================================================
GroceryTracker Class Declaration
-----------------------------------------------------------
This class is responsible for managing all data related to
grocery item frequency tracking. It handles reading data
from the input file, storing frequency counts, displaying
results to the user, and generating a backup data file.

This design follows object-oriented programming principles
by encapsulating all data and behavior related to tracking
inside a single, reusable class.
===========================================================
*/
class GroceryTracker {
public:
    /*
    -------------------------------------------------------
    LoadData
    Reads grocery item data from a text file and builds
    the internal frequency map. Each item name serves as
    the key, and the number of occurrences becomes the
    value.
    -------------------------------------------------------
    */
    void LoadData(const std::string& fileName);

    /*
    -------------------------------------------------------
    WriteBackupFile
    Writes all calculated item frequencies to an external
    backup file using the required naming convention
    (frequency.dat). This ensures data persistence and
    provides a recovery option if needed.
    -------------------------------------------------------
    */
    void WriteBackupFile(const std::string& fileName);

    /*
    -------------------------------------------------------
    GetItemFrequency
    Returns the total number of times a specific grocery
    item appears in the dataset. If the item does not
    exist, the function safely returns 0.
    -------------------------------------------------------
    */
    int GetItemFrequency(const std::string& item) const;

    /*
    -------------------------------------------------------
    DisplayAllFrequencies
    Displays every grocery item and its corresponding
    frequency in a clean, readable list format.
    -------------------------------------------------------
    */
    void DisplayAllFrequencies() const;

    /*
    -------------------------------------------------------
    DisplayHistogram
    Outputs a text-based histogram using asterisks to
    visually represent the frequency of each grocery item.
    The number of asterisks matches the frequency count.
    -------------------------------------------------------
    */
    void DisplayHistogram() const;

private:
    // Stores each grocery item and how many times it appears
    std::map<std::string, int> frequencyMap;
};

#endif

