#ifndef MATRIX_H_
#define MATRIX_H_

#include <string>
#include <cstdlib>
using namespace std;

class Matrix{
public:
    int matrixArr[3][3];
    Matrix();
    //multiplies the matrices
    Matrix operator*(const Matrix& INPUT) const;
    
    //checks if they are equal
    bool operator==(const Matrix& INPUT) const;
    
    //outputs: the array as a well spaced matrix string
    //Format: Each row in a single line and good spacing between colums.
    string toString() const;
};

#endif