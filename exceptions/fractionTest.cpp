#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    Fraction f1;
    Fraction f2;

    // get the fractions.
    cout << "Enter fraction 1: ";
    cin >> f1;
    cout << "Enter fraction 2: ";
    cin >> f2;

    // Print the factions
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;

    // Test arithmetic operators
    cout << "f1 + f2 = " << (f1 + f2) << endl;
    cout << "f1 - f2 = " << (f1 - f2) << endl;
    cout << "f1 * f2 = " << (f1 * f2) << endl;
    cout << "f1 / f2 = " << (f1 / f2) << endl;
 
    // Test assignment operator
    Fraction f3;
    f3 = f1;
    cout << "f3 = f1 = " << f3 << endl;
}