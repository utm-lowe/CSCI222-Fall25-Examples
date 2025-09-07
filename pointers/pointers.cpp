#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    int i;

    // store the addres of i in ptr
    ptr = &i;

    // derference ptr for assignment
    *ptr = 42;

    // print out everything
    cout << "i: " << i << endl;
    cout << "*ptr: " << *ptr << endl;
    cout << "ptr: 0x" << ptr << endl;
    cout << "&i: 0x" << &i << endl;

    // ptr arithmetic
    cout << "ptr + 2: 0x" << ptr+2 << endl;
}