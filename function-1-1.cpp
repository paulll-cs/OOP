#include <iostream>

int* readNumbers(){
    int length = 10;
    int* array = new int[length];

    for (int i = 0; i<length;i++){
        std::cout<<"Enter an integer:\n";
        std::cin>>array[i];
    }
    printNumbers(array,length);

    return array;
}


void printNumbers(int* numbers,int length){
    for (int i = 0; i<length; i++){
        std::cout<<i+1<<" "<<numbers[i]<<"\n";
    }
}