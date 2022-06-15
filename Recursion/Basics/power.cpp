#include <iostream>

int power(int a,  int p);

int power(int x, int p){

    if(p == 0){
        return 1;
    }
    if(p==1){
        return x;
    }else{
        return (x*power(x,p-1));
    }
}

int main(){

    int r = power(2,1);
    
    std::cout<< "Result : " << r;

    return 0;
}
