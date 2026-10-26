#ifndef TRACKER_H
#define TRACKER_H

#include <map>
#include <string>
using namespace std;

class Tracker {
public:
    Tracker();
    void loadFile(const string filename); // Variable to LoadFile
    void display(); // Displays the menu
    void searchItem(const string item); // Searches for items for Option 1
    void printFreqList(); // Prints the Frequency List
    void printFreqHistory(); // Prints the Frequency Histogram
    bool saveFile(const string filename);

private:
    map<string, int> tracker;
};

#endif // TRACKER_H