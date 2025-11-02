// Use C++ function overloading to implement max
#include <iostream>
#include <string>

using namespace std;

// function prototypes
int max(int a, int b);
double max(double a, double b);
string max(string a, string b);

int main()
{
    cout << max(1, 2) << endl;
    cout << max(1.5, 10.7) << endl;
    cout << max("one", "two") << endl;
}


int max(int a, int b)
{
    if(a>b) {
        return a;
    } else {
        return b;
    }
}


double max(double a, double b)
{
    if(a>b) {
        return a;
    } else {
        return b;
    }
}


string max(string a, string b)
{
    if(a>b) {
        return a;
    } else {
        return b;
    }
}