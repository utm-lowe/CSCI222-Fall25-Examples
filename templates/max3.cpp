// Use C++ function templates to implement max
#include <iostream>
#include <string>

using namespace std;

// function prototypes
template <typename T> T my_max(T a, T b);

int main()
{
    cout << my_max<int>(1, 2) << endl;
    cout << my_max<double>(1.5, 10.7) << endl;
    cout << my_max<string>("one", "two") << endl;
}


template <typename T> 
T my_max(T a, T b)
{
    if(a>b) {
        return a;
    } else {
        return b;
    }
}

