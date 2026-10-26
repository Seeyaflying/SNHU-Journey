/*
*Daniel Dalton
 *CS-210
 *Airgead Banking App
 *Project 2
 *4/6/2025
 */

#ifndef SAVINGS_H
#define SAVINGS_H

class Savings {
private:
    // Principal variables
    double principalAmount;
    double monthlyContribution;
    double annualReturn;
    int numberOfYears;

public:
    // Constructor
    Savings(double principalAmount, double monthlyContribution, double annualReturn, int numberOfYears);

    // Getters for variables
    double getPrincipalAmount() const;
    double getMonthlyContribution() const;
    double getAnnualReturn() const;
    int getNumberOfYears() const;

    // Methods to calculate and display savings reports
    void displayNoMonthlyDepositsReport();
    void displayMonthlyDepositsReport();
};

#endif // SAVINGS_H
