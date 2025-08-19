#include <iostream>
using namespace std;

void hexDigits(int* arr, int length) {
    for (int i = 0; i < length; i++) {
        int num = arr[i];
        char hexChar;

        switch (num) {
            case 10: hexChar = 'A'; 
                break;
            case 11: hexChar = 'B'; 
                break;
            case 12: hexChar = 'C'; 
                break;
            case 13: hexChar = 'D'; 
                break;
            case 14: hexChar = 'E'; 
                break;
            case 15: hexChar = 'F'; 
                break;
            default: hexChar = '0' + num; 
        }

        cout << i << " " << num << " " << hexChar << "\n";
    }
}