#include <iostream>
#include <string>

std::string base_10_to_base_2(std::string n_base10,std::string n_base2 = ""){

    int n_base10i = std::stoi(n_base10);

    if (n_base10i == 1){
        return "1" + n_base2;
    }

    int quotient = (n_base10i-(n_base10i%2))/2;
    int remainder = n_base10i%2;
    std::string str_remainder;

    if (remainder ==0){
        str_remainder = "0";
    }else{
        str_remainder = "1";
    }
    return base_10_to_base_2(std::to_string(quotient),str_remainder+n_base2);
}

void print_binary_str(std::string decimal_number){
    std::cout<<base_10_to_base_2(decimal_number);
}
