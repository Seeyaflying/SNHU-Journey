/*
* TempConvert.cpp
* Date: 04/03/2024
* Author: Daniel Dalton
* CS-210
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Read and Opens the text file
    ifstream inputFile("FahrenheitTemperature.txt");
    // If the file is not open this will print out and return an error
    if (!inputFile) {
        cerr << "Unable to open file FahrenheitTemperature.txt. Is it in the same folder as this script." << endl;
        return 1; // Throws an error
    }
    //Creates then opens new file for conversion
    ofstream outputFile("CelsiusTemperature.txt");
    // Check if the output file is successfully opened.
    if (!outputFile) {
        cerr << "Unable to create output file CelsiusTemperature.txt. Please try again." << endl;
        return 1; // Throws an error
    }
    // Conversion variable from Fahrenheit to Celsius
    const double FAHRENHEIT_TO_CELSIUS = 5.0 / 9.0;
    // Read data from open files
    string city;
    int fahrenheit;
    // Reads the data from each line
    while (inputFile >> city >> fahrenheit) {
        // Convert Fahrenheit to Celsius using the formula
        double celsius = (fahrenheit - 32.0) * FAHRENHEIT_TO_CELSIUS;
        //Writes the new data to the new created file
                outputFile << city << " " << celsius << endl;
    }
    // Close both the files.
    inputFile.close();
    outputFile.close();
    cout << "Data successfully written to CelsiusTemperature.txt" << endl;
    cout << "Press Enter to continue..." << endl;
    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.