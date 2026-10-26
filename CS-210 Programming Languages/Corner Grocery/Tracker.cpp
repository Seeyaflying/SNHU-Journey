#include "Tracker.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Tracker::Tracker() {}

// Loading the file from Tracker
void Tracker::loadFile(const string filename) {
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open input file." << endl;
        return;
    }

    string item;
    while (inputFile >> item) {
        for (char& c : item) {
            c = tolower(c);
        }
        tracker[item]++;
    }

    inputFile.close();
}

// Displays the menu and everytime after entering an option
void Tracker::display() {
    cout << "Menu Options:" << endl;
    cout << "1. Search for an item:" << endl;
    cout << "2. Print item frequency list:" << endl;
    cout << "3. Print item frequency histogram:" << endl;
    cout << "4. Exit Program" << endl;
}

// Searches for Items in the list
void Tracker::searchItem(const string item) {
    string lowerItem = item;
    for (char& c : lowerItem) {
        c = tolower(c);
    }
    if (tracker.find(lowerItem)!= tracker.end()) {
        cout << tracker[lowerItem] << endl;
    } else {
        cout << "Item not found." << endl;
    }
}
// Prints out the Frequency List
void Tracker::printFreqList() {
    cout << "Item Frequency List:" << endl;
    for (const auto& pair : tracker) {
        cout << pair.first << " " << pair.second << endl;
    }
}
// Prints out the Frequency Histogram
void Tracker::printFreqHistory() {
    cout << "Item Frequency Histogram List:" << endl;
    for (const auto& pair : tracker) {
        cout << pair.first << " ";
        for (int i = 0; i < pair.second; i++) {
            cout << "*";
        }
        cout << endl;
    }
}
// Saves and closes the file so it can be sued again
bool Tracker::saveFile(const string filename) {
    ofstream outputFile(filename);
    if (!outputFile.is_open()) {
        cerr << "Error: Unable to open output file." << endl;
        return false;
    }

    for (const auto& pair : tracker) {
        outputFile << pair.first << " " << pair.second << endl;
    }
    outputFile.close();
    cout << "Data file created: " << filename << endl;
    return true;
}