/*
 *Daniel Dalton
 *CS-210
 *Airgead Banking App
 *Project 2
 *4/6/2025
 */

#include <iostream>
#include "savings.h"

int main() {
    while (true) {
        // Prints heading and how the user would like to proceed
        std::cout << "*************************************\n";
        std::cout << "*************Data Input**************\n";
        std::cout << "Initial Principal Amount: \n";
        std::cout << "Monthly Contribution: \n";
        std::cout << "Annual Return: \n";
        std::cout << "Number of years: \n";
        std::cout << "Press Enter to continue...\n";
        std::cin.get(); // Wait for user input

        // Inputs from user
        std::cout << "*************************************\n";
        std::cout << "*************Data Input**************\n";
        double initialFunds, monthlyAddition, annualYield;
        int timePeriod;

        std::cout << "Initial Principal Amount: $";
        std::cin >> initialFunds;
        std::cout << "Monthly Contribution: $";
        std::cin >> monthlyAddition;
        std::cout << "Annual Return: %";
        std::cin >> annualYield;
        std::cout << "Number of years: ";
        std::cin >> timePeriod;

        // Utilizing the supplied inputs, creating a Savings object
        Savings currentSavings(initialFunds, monthlyAddition, annualYield, timePeriod);

        // Make use of the report methods
        currentSavings.displayNoMonthlyDepositsReport();
        std::cout << "\n";

        // If there is a monthly deposit of at least $1, call monthly deposit report
        if (monthlyAddition > 0) {
            currentSavings.displayMonthlyDepositsReport();
        }

        // Ask the user if they would want to try another option
        std::cout << "\nDo you want to try another? (y/n): ";
        char userChoice;
        std::cin >> userChoice;

        // Break the loop if the user doesn't wish to try another
        if (userChoice!= 'y') {
            break;
        }
        std::cout << "\n";
        std::cout << "Have a wonderful day." << std::endl;
    }

    return 0;
}
