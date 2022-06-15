#include <iostream>


int sum_arr(int arr[], int size){

    if(size == 0){
        return 0;
    }
    return *arr + sum_arr(arr+1,size-1);   // Traverse array adresses in forward direction (from base)
    // Compute sub problem and use it to  find total result by combining with current
}

// Note the direction of traversing and order of operation (after return or before return)

int main(){

    int arr[5];
    std::cout<< "Enter the elements : ";

    for(int i=0; i<5; i++){

        std::cin>> *(arr+i);
    }

    int sum = sum_arr(arr,5);
    std::cout<<"The sum is : "<<sum;
}
