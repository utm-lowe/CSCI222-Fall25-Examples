#include <iostream>

using namespace std;

int main()
{
    char str[100];

    // get a word
    cout << "Enter a word: ";
    cin >> str;

    // print the characters in the word
    for(int i=0; str[i]; i++) {
        cout << str[i] << "  " 
             << dec << (int)str[i] << "  0x"
             << hex << (int)str[i] <<endl;
    }
}