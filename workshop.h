#include <iostream>
#include <climits>

void changeValue(double* number){
    *number = 42;
}

void printArray(double* array, int size){
    for (int i =0;i<size;i++){
        std::cout<<array[i];
    }
}


double arrayMax(double* array,int size){
    double max = INT_MIN;

    for (int i = 0;i<size;i++){
        if (max < array[i]){
            max = array[i];
        }
    }

    return max;
}

double* dynamicArray(int size, double value){
    double* arr = new double[size];

    for (int i = 0;i < size; i++){
        arr[i] = value;
    }

    return arr;
}