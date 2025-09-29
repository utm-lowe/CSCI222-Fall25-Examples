#include <iostream>

using namespace std;

void printString(const char* str);
void printInt(int x);
int getInt();

int main()
{
    int x;

    // cout << "Give me an integer: ";
    // cin >> x;
    printString("Give me an integer: ");
    x = getInt();

    // cout << "You entered " << x << endl;
    printString("You entered ");
    printInt(x);
    printString("\n");

}


void printString(const char* str)
{
    // print a string in a very C-like way
    while(*str) {
        cout.put(*str++);
    }
    cout.flush();
}

void printInt(int x)
{
    char buf[20];
    int count;
    bool neg;

    // handle neg
    neg = x<0;
    if(neg) x *= -1;

    //loop through the number
    count = 0;
    while(x) {
        buf[count++] = x%10 + '0';
        x/=10;
    }

    //print the digits
    if(neg) cout.put('-');
    for(int i=count-1; i>=0; i--) {
        cout.put(buf[i]);
    }
    cout.flush();
}

int getInt()
{
    bool neg = false;
    int x = 0;

    //skip spaces
    while(cin.peek() == '\n' || cin.peek() == ' ' || cin.peek() == '\t') {
        cin.get();
    }

    // check for negative
    if(cin.peek() == '-') {
        neg = true;
        cin.get();
    }

    //accumulate digits
    while(cin.peek() >= '0' and cin.peek() <= '9') {
        x *= 10;
        x += cin.get() - '0';
    }

    if(neg) x = -x;
    return x;
}