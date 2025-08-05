#include <string>
#include <iostream>

std::string binary_addition(int base_2_in_1,int base_2_in_2,std::string base_2_out =""){
    int base_2_out_result = 0;
    std::string remainder = "";

    if (base_2_in_1 == 0|| base_2_in_2 == 0){
        return "1" + base_2_out;
    }

    int last_digit_1 = base_2_in_1%10;
    int last_digit_2 = base_2_in_2%10;

    if (last_digit_1 ==0&& last_digit_2 ==0){
        remainder = "0";
    }else{
        int int_remainder = 1/(last_digit_1+last_digit_2);
        remainder = std::to_string(int_remainder);
    }

    return binary_addition(base_2_in_1%10,base_2_in_2%10,remainder + base_2_out);
}

int main(void)
{
    std::cout<<"Enter 2 binary numbers";
    
    int binary_1=0;
    int binary_2=0;
    
    std::cin>>binary_1;
    std::cin>>binary_2;
    
    std::cout<<"Result: "<< binary_addition(binary_1,binary_2);

    return 0;
}
