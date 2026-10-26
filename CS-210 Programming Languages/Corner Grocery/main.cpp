/*
 * Daniel Dalton
 * CS-210
 * Project 3: Corner Grocery App
 * The purpose of the grocery tracker app is to allow the business to figure out what items they are selling so they can
 * efficiently sort the produce department of their store. This allows the user to enter from a menu to 1-4
 *
 * Option 1: Ask the user for a name of an item of produce then displays the Result that is found in the txt file
 * Option 2: Allows a user to see a list of all items and the frequency of those items
 * Option 3: Shows the user the list of items and the frequency in stars of those items
 * Option 4: Allows a user to exit the program
 */

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "Tracker.h"

using namespace std;
int main() {
    Tracker cornerGrocer;
    string filename = "../CS210_Project_Three_Input_File.txt"; // Opens the file for the program
    ifstream file(filename);
    if (file.is_open()) {
        cornerGrocer.loadFile(filename);
        file.close();
    } else {
        cerr << "Error: Input file not found." << endl; // Inputs an error if the input file is not found
        return 1;
    }

    cornerGrocer.saveFile("../frequency.dat"); // Saves the file to a frequency.dat

    int option; // Variable for the option menu
    while (true) {
        cornerGrocer.display();
        cout << "Enter an option: ";
        cin >> option;

        switch (option) {
            case 1: { // Option 1 from the above
                string searchItem;
                cout << "Enter the item name: ";
                cin >> searchItem;
                cornerGrocer.searchItem(searchItem);
                break;
            }
            case 2: // Option 2 from above
                cornerGrocer.printFreqList();
            break;
            case 3: // Option 3 from above
                cornerGrocer.printFreqHistory();
            break;
            case 4: // Option 4 from above
                cout << "Program Ended" << endl;
            return 0;
            default:
                cout << "Not a valid choice. Please enter in 1-4 only." << endl;
        }
    }

    return 0;
}