#include <iostream>

void print_scaled(int array[3][3],int scale){
    int new_list[9];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            new_list[i+j] = array[i][j]*scale;
        }
    }
    for (int i=0;i<scale;i++){
        for (int j=0;j<scale;j++){
            std::cout<<new_list[i+j]<<" ";
        }
        std::cout<<"\n";
    }
}