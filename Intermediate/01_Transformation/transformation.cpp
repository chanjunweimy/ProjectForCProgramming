// Transformation.cpp

#include <iostream>
#include <string>
#include "Matrix.h"

using namespace std;

int main()
{
   int sizeOfMatrix, numOfOperations; 
   int i, j;
    
    // Read input and create Matrix object
    cin >> sizeOfMatrix;
    Matrix matrix(sizeOfMatrix);

    int input[MAX_SIZE][MAX_SIZE];

    for (i=0; i<sizeOfMatrix; i++)
    {
        for (j=0; j<sizeOfMatrix; j++)
        {
            cin >> input[i][j]; 
        }
    }
    
    // For each operation, process the matrix`
    cin >> numOfOperations;
    
    string operation, type;
    for (i=0; i<numOfOperations; i++)
    {
        cin >> operation >> type;
        matrix.operate(operation, type, input);
    }
    
    // Output final matrix
    for (i=0; i<sizeOfMatrix; i++)
    {
        for (j=0; j<sizeOfMatrix; j++)
        {
            cout << input[i][j] << " "; 
        }
        cout << endl;
    }
    
    return 0;
}
