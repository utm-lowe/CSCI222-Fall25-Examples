#include <iostream>

using namespace std;

double **createMatrix(int rows, int cols);
void destroyMatrix(double **m, int rows);

int main()
{
    double **m = nullptr;  // < - A matrix
    int rows, cols;        // <- Dimensions

    // Get the dimensions from the user
    cout << "Rows=";
    cin >> rows;
    cout << "Cols=";
    cin >> cols;

    // create the matrix
    m = createMatrix(rows, cols);

    // read the matrix
    cout << "Enter the matrix." << endl;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cin >> m[i][j];
        }
    }

    // print the matrix
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout << m[i][j] << '\t';
        }
        cout << endl;
    }

    destroyMatrix(m, rows);
}


/*
 * m[0] -> {       }
 * m[1] -> {       }
 * ...
 * m[rows-1] -> {      }
 */
double **createMatrix(int rows, int cols)
{
    double **m = nullptr;

    // create the row pointers
    m = new double*[rows];

    // create each row
    for(int i=0; i<rows; i++) {
        m[i] = new double[cols];
    }

    return m;
}


void destroyMatrix(double **m, int rows)
{
    // delete each row
    for(int i=0; i<rows; i++) {
        delete[] m[i];
    }

    // delete the array of row pointers
    delete[] m;
}