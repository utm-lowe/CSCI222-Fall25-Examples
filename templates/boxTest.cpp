#include <iostream>
#include <string>
#include "box.h"

using namespace std;

int main()
{
    Box<int> ib(1);
    Box<string> sb("hello, world");

    cout << ib << endl
         << sb << endl;
}