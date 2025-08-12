#include <iostream>
#include <stdio.h>
#include "workshop.h"

int main(){
    double n1 = 1;
    double array[5] = {1,2,3,4,5};
    double array2[9] = {1.3,2.5,7.3,-5.4,10.1,9.9,13.7,1.0,-5.6};

    double* ptr = &n1;
    double* ptr2 = array;
    double* ptr3 = array2;

    std::cout<<n1<<'\n';
    changeValue(ptr);
    std::cout<<n1<<'\n';

    printArray(ptr2,5);

    arrayMax(ptr3,9);

    double value = 5;
    int size = 9;
    double* dynamic_array = dynamicArray(size,value);

    delete[] dynamic_array;

}