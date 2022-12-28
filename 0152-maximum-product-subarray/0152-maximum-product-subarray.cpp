class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int net_max = nums[0];
        int imin = nums[0];
        int imax = nums[0];
        
        for(int i=1; i<nums.size(); i++){
            
            if( nums[i] < 0) swap(imin,imax);
            
            // At each step imin and imax either reset or take the product
            imin = min(nums[i], imin*nums[i]);
            imax = max(nums[i], imax*nums[i]);
            
            if(imax > net_max) net_max = imax;
        }
        return net_max;
    }
};