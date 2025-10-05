#include<iostream>

using namespace std;

int main()
{
    int x;

    while(true) {
        cout << "Enter an integer: ";
        cin >> x;
        if(not cin) { // if cin is false, it has failed
            cerr << "Invalid entry, please try again." << endl;
            cin.clear(); // reset the error condition

            // eat an entire line of text
            while(cin.peek() != '\n') {
                cin.ignore();
            }
            continue; // <- go back to the top of the loop
        }
        cout << "You entered " << x << "." << endl;
    }
}