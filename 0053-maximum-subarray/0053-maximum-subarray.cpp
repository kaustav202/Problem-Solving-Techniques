class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int net_max = INT_MIN;

        int running_sum = 0;
        
        for(int i=0; i<nums.size(); i++){
            
            int curr = running_sum + nums[i];
            running_sum = curr >= 0 ? curr : 0;
            net_max = curr > net_max ? curr : net_max;   
        }
        
        return net_max;
        
    }
};