#include <iostream>

int dig_count(int n){
    if(n <= 0){
        return 0;
    }
    return 1 + dig_count(n/10);
}

int main(){

    int n;
    std::cout<<"Enter the number : ";
    std::cin>> n;
    int r = dig_count(n);
    std::cout<< r;
    return 0;
}
