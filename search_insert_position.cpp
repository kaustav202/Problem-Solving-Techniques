#include<vector>

using namespace::std;

int searchInsert(vector<int>& nums, int target) {
    int n=nums.size();   //variable to store the size of nums vector.
    int start=0, end=n-1; 
    while(start<=end){
        int mid=start+(end-start)/2;   
        if(target>nums[mid]){   //checking whether target is greater than element in the vector at the index mid.
            start=mid+1;  //if so then shifting start next to mid.
        }
        else if(target<nums[mid]){    
            end=mid-1;    //if target is less than element at mid index then shifting end previous to the mid element.
        }
        else{
            return mid;  // if target is found at mid index then returning that index.
        }
    }
    return start;  // if the target is not found then the start index is returned which means no such target element is found in the vector nums so the element very close to it is returned.
}