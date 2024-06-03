#include "Matrix.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Matrix matrix1;
    Matrix matrix2;

    cout << "Matrix 1:\n" << matrix1.toString() << endl;
    cout << "Matrix 2:\n" << matrix2.toString() << endl;

    if(matrix1 == matrix2){
        cout << "Matrix 1 is the same as Matrix 2." << endl;
    } else {
        cout << "Matrix 1 is not the same as Matrix 2." << endl;
    }

    cout << endl;

    cout << "Matrix 1 * Matrix 2 is: \n" << (matrix1*matrix2).toString();
    return 0;
}