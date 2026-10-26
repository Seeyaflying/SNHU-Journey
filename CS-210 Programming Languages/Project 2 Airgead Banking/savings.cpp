/*
*Daniel Dalton
 *CS-210
 *Airgead Banking App
 *Project 2
 *4/6/2025
 */

#include "savings.h"
#include <iostream>
#include <iomanip>

// Constructor
Savings::Savings(double principalAmount, double monthlyContribution, double annualReturn, int numberOfYears)
    : principalAmount(principalAmount), monthlyContribution(monthlyContribution), annualReturn(annualReturn), numberOfYears(numberOfYears) {}

// Getters
double Savings::getPrincipalAmount() const { return principalAmount; }
double Savings::getMonthlyContribution() const { return monthlyContribution; }
double Savings::getAnnualReturn() const { return annualReturn; }
int Savings::getNumberOfYears() const { return numberOfYears; }

// Method to calculate and display savings report without monthly deposits
void Savings::displayNoMonthlyDepositsReport() {
    // assigning principal amount to a second variable for temp holding
    double totalFunds = principalAmount;
    // To find the actual percent and make it into a decimal
    double annualInterestRate = (annualReturn / 100);

    // Prints out the report for No Monthly Deposits
    std::cout << "Savings Report (No Monthly Deposits):\n";
    std::cout << "Initial Principal: $" << std::fixed << std::setprecision(2) << principalAmount << "\n";
    std::cout << "Annual Return: " << annualReturn << "%\n";
    std::cout << "Number of Years: " << numberOfYears << "\n";

    // Converts the figure into per year
    for (int year = 1; year <= numberOfYears; ++year) {
        double interestEarned = totalFunds * annualInterestRate;
        totalFunds += interestEarned;
        std::cout << "Year " << year << ": $" << std::fixed << std::setprecision(2) << totalFunds << "\n";
    }
}

// Method to calculate and display savings report with monthly deposits
void Savings::displayMonthlyDepositsReport() {
    double totalFunds = principalAmount;
    double annualInterestRate = (annualReturn / 100);
    double monthlyInterestRate = annualInterestRate / 12;

    // Prints out report for with Monthly Deposits
    std::cout << "=======================================\n";
    std::cout << "Savings Report (With Monthly Deposits):\n";
    std::cout << "Initial Principal: $" << std::fixed << std::setprecision(2) << principalAmount << "\n";
    std::cout << "Monthly Contribution: $" << std::fixed << std::setprecision(2) << monthlyContribution << "\n";
    std::cout << "Annual Return: " << annualReturn << "%\n";
    std::cout << "Number of Years: " << numberOfYears << "\n";

    // Converts the figure into per year
    for (int year = 1; year <= numberOfYears; ++year) {
        for (int month = 1; month <= 12; ++month) {
            double interestEarned = totalFunds * monthlyInterestRate;
            totalFunds += monthlyContribution + interestEarned;
        }
        std::cout << "Year " << year << ": $" << std::fixed << std::setprecision(2) << totalFunds << "\n";
    }
}
