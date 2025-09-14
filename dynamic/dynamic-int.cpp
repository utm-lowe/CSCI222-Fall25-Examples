#include <iostream>

using namespace std;

int main()
{
    int *p = nullptr;  // <- Create a pointer, which will start with nullptr
    int x=12;

    // allocate a new integer
    p = new int;
    *p = 4;
    std::cout << *p << std::endl;

    // have a look at segments
    cout << "  &p: " << (void*) &p << endl
         << "  &x: " << (void*) &x << endl
         << "   p: " << (void*) p << endl
         << "main: " << (void*) main << endl;

    // deallocate p
    delete p;
}