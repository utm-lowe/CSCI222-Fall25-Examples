#include <iostream>

using namespace std;

int main()
{
    double *ar = nullptr; // < - A pointer to our dynamic array
    int n;

    // ask the user how many
    cout << "How many numbers? ";
    cin >> n;

    // allocate our array
    ar = new double[n];

    // read in the array of values
    cout << "Enter " << n << " values." << endl;
    for(int i=1; i<=n; i++) {
        cout << i << ": ";
        cin >> ar[i-1];
    }

    // print our list of numbers
    cout << "{";
    for(double *p=ar; p != ar+n-1; ++p) {
        cout << *p << ", ";
    }
    cout << ar[n-1] << "}" << endl;
    //     *(ar+n-1) in pointer arithmetic

    // destroy the array
    delete [] ar;
}