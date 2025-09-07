#include <iostream>

using namespace std;

int main()
{
    char str[100];

    // get a word
    cout << "Enter a word: ";
    cin >> str;

    // print the characters in the word
    for(char *p=str; *p; p++) {
        cout << *p << "  " 
             << dec << (int)*p << "  0x"
             << hex << (int)*p <<endl;
    }
}