#include "Matrix.h"
#include <string>
#include <cstdlib>

using namespace std;

Matrix::Matrix(){
    for(int row = 0 ; row < 3 ; row++){
        for(int column = 0; column < 3; column++){
            matrixArr[row][column] = (rand() % 19) - 9;
        }
    }
};
Matrix Matrix::operator*(const Matrix& INPUT) const{
    //row * column
    Matrix result;
    for(int row = 0 ; row < 3 ; row++){
        for(int column = 0; column < 3; column++){
            result.matrixArr[row][column] = 0;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                result.matrixArr[i][j] += matrixArr[i][k] * INPUT.matrixArr[k][j];
            }
        }
    }
    return result;
};
bool Matrix::operator==(const Matrix& INPUT) const{
    for(int row = 0 ; row < 3 ; row++){
        for(int column = 0; column < 3; column++){
            if(matrixArr[row][column] != INPUT.matrixArr[row][column]){
                return false;
            }
        }
    }

    return true;
};

string Matrix::toString() const{
    string output;
    for(int row = 0; row < 3; row++){
        for(int column = 0; column < 3; column++){
            output.append(to_string(matrixArr[row][column]).append("\t"));
            if(column == 2){
                output.append("\n");
            }
        }
    }
    return output;
};