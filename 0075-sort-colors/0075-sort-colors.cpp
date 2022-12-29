class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0, mid=0, high=nums.size()-1, tmp = 0;
        
        while(mid <= high){
            
            if(nums[mid] == 0){
                // Swap with low ( sure to be 1) and move mid & low
                tmp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = tmp;
                low++;
                mid++;
            }
            // Just move mid
            else if(nums[mid] == 1) mid++;
            // Swap with high and just move high
            else{
                tmp = nums[high];
                nums[high] = nums[mid];
                nums[mid] = tmp;
                high--;
            }
        }
    }
};