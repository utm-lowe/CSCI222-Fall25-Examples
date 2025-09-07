#include <iostream>

using namespace std;

void arrayFun(int ar[]);

int main()
{
    int ar[100];

    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    cout << "sizeof(float): " << sizeof(float) << endl;
    cout << "sizeof(ar): " << sizeof(ar) << endl;
    arrayFun(ar);
}

void arrayFun(int ar[])
{
    cout << "sizeof(ar) within arrayFun: " << sizeof(ar) << endl;
}