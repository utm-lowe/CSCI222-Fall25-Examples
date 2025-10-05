#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct Point {
    int x;
    int y;
};

// An overloaded insertion operator for point
ostream& operator<<(ostream &os, const Point &p) 
{
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}


int main()
{
    Point p{1, 2};
    ostringstream ostr; // output string stream

    cout << p << endl;

    ostr << p;
    cout << "From the string stream: " << ostr.str() << endl;
}