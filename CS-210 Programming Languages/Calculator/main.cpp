/*
* Calculator.cpp
 *
 *  Date: 3-15-25
 *  Author: Daniel Dalton
 */

#include <iostream>

using namespace std;

// Need to replace void with int for the program to work
int main() {
    char statement[100];
    int op1, op2;
    char operation;
    // Changing the double quotes to single quotes to initialize the variable
    // Adding the semicolon to the end because it is needed for every statement
    // Fixed the spacing to make it more uniformed with standards
    char answer = 'Y';
    // Had to change this to the capital Y to match the previous case


    while (answer =='Y')
    {
        cout << "Enter expression" <<endl;
        cin >> op2 >> operation >> op1;
        //Have to change the double quotes to single quotes to check comparison
        // Take the semicolon off the end of the if statement
        if (operation == '+')
            // Have to fix the >> to << to match the proper procedure needed
                //Need to indent under the if statement for it to work properly
                    cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
        // Take the semicolon off the end of the if statement
        if (operation == '-')
            //Need to indent under the if statement for it to work properly
                cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
        if (operation == '*')
            // Add a semicolon at the end of the next line statement
                cout << op1 << " / " << op2 << " = " << op1 * op2 << endl;
        if (operation == '/')
            cout << op1 << " * " << op2 << " = " << op1 / op2 << endl;

        cout << "Do you wish to evaluate another expression? " << endl;
        cin >> answer;
        if (answer == 'N')
            cout << "Program Finished" << endl;
    }

}