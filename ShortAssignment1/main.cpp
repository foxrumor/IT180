#include <iostream>
using namespace std;

double calculateMean(int arr[], int size);
int highestValue(int arr[], int size);

int lowestValue(int arr[], int size){
    if(size < 1){
        return 0;
    }
    int output = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i]<output){
            output = arr[i];
        }
    }
    return output;
}

int highestValue(int arr[], int size){
    if(size < 1){
        return 0;
    }
    int output = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > output){
            output = arr[i];
        }
    }
    return output;
}

double calculateMean(int arr[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += arr[i];
    }

    return total / static_cast<double>(size);
}

void fillIntArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << "Enter value " << (i+1) << ":";
        cin >> arr[i];
    }
}

int main(){
    const int arrSize = 15;
    int arr[arrSize];
    fillIntArr(arr, arrSize);
    cout << "Mean: " << calculateMean(arr, arrSize) << "\nLowest Value: " << lowestValue(arr ,arrSize) << "\nHighest Value: " << highestValue(arr, arrSize) << endl;

    return 0;
}