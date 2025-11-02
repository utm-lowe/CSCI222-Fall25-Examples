// max function without overloading or templates (OG C style)
#include <iostream>
#include <string>

using namespace std;

// function prototypes
int max_int(int a, int b);
double max_double(double a, double b);
string max_string(string a, string b);

int main()
{
    cout << max_int(1, 2) << endl;
    cout << max_double(1.5, 10.7) << endl;
    cout << max_string("one", "two") << endl;
}


int max_int(int a, int b)
{
    if(a>b) {
        return a;
    } else {
        return b;
    }
}


double max_double(double a, double b)
{
    if(a>b) {
        return a;
    } else {
        return b;
    }
}


string max_string(string a, string b)
{
    if(a>b) {
        return a;
    } else {
        return b;
    }
}