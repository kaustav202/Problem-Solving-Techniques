#include <iostream>

void increasing(int n){

    if(n==1){
        std::cout<<n<<" ";
        return;
    }else{
        increasing(n-1);
        std::cout<< n<<" ";
        return;
    }

} 
// Recursion with operation after return from small case
// n is different and independent local varaiable for each call
// Return type is void so no data passed

int main(){

    int n;
    std::cout<<"Enter No. of elements :  ";
    std::cin>> n;
    increasing(n);

    return 0;
}
