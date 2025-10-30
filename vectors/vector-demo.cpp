#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &ar);
void printVectorIterator(vector<int> &ar);
void printVectorForEach(vector<int> &ar);

int main()
{
    vector<int> ar;   // <- create an empty vector
    int x;

    // read integers until this fails
    cout << "Enter integers. '.' on a line by itself to stop." << endl;
    while(cin >> x) {
        ar.push_back(x); // <- appends x to the end of the vector.
        cout << "The vector now has " << ar.size() << " elements." << endl;
    }

    printVector(ar);
    printVectorIterator(ar);
    printVectorForEach(ar);
}


void printVector(vector<int> &ar)
{
    cout << "{";
    for(int i=0; i<ar.size()-1; i++) {
        cout << ar[i] << ", ";
    }
    cout << ar.back() << "}" << endl;
}

void printVectorIterator(vector<int> &ar)
{
    cout << "{";
    for(auto itr=ar.begin(); itr != ar.end()-1; itr++) {
        cout << *itr << ", ";
    }
    cout << ar.back() << "}" << endl;
}

void printVectorForEach(vector<int> &ar)
{
    bool first = true;
    cout << "{";
    for(int &i : ar) {
        if(first) {
            first = false;
        } else {
            cout << ", ";
        }
        cout << i;
    }
    cout << "}" << endl;
}