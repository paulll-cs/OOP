#include <iostream>
#include <string>

std::string base_10_to_base_2(int n_base10,std::string n_base2 = ""){

    if (n_base10 == 1){
        return "1" + n_base2;
    }

    int quotient = (n_base10-(n_base10%2))/2;
    int remainder = n_base10%2;
    std::string str_remainder;

    if (remainder ==0){
        str_remainder = "0";
    }else{
        str_remainder = "1";
    }
    return base_10_to_base_2(quotient,str_remainder+n_base2);
}

int main (void){
    int base_10 =0;
    std::cout<<"Enter a number in base 10: ";
    std::cin>>base_10;

    std::cout<<"Your number in binary is: "<<base_10_to_base_2(base_10);
}