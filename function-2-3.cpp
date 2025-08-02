#include <iostream>

void two_five_nine(int array[], int n){
    int two_count=0;
    int five_count=0;
    int nine_count=0;
    int i;
    if (n<1){
        two_count = 0;
        five_count = 0;
        nine_count = 0;
        std::cout<< "2:" << two_count << ";" << "5:" << five_count << ";" << "9:" << nine_count << "\n";
    }else{
        for (i=0;i<n;i++){
            switch(array[i]){
                case 2: 
                two_count++;
                case 5:
                five_count++;
                case 9:
                nine_count++;
            }
        }
        std::cout<< "2:" << two_count << ";" << "5:" << five_count << ";" << "9:" << nine_count << "\n";
    }
}