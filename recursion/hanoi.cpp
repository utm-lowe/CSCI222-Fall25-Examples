#include <iostream>

using namespace std;

void move(int n, char src, char dest, char spare) 
{
    if(n==1) {
        // base condition
        cout << src << " -> " << dest << endl;
        return;
    }

    move(n-1, src, spare, dest);
    move(1, src, dest, spare);
    move(n-1, spare, dest, src);
}

int main()
{
    int n;

    cout << "How many disks? ";
    cin >> n;

    move(n, 'A', 'C', 'B');
}