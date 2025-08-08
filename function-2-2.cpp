#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits){
    double decimal = 0;

    for (int i=number_of_digits-1;i>-1;i--){
        decimal += (double)binary_digits[i]*(2.0,(double)binary_digits[i]);
    }
    return (int)decimal;
}