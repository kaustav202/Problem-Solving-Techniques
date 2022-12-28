class Solution {
public:
    
    int net_max = 1;
    
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int> dp(nums.size(), 1);
        
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if(nums[i] > nums[j]){
                    dp[i] = max(dp[i], dp[j] + 1);
                    if(dp[i] > net_max) net_max = dp[i];
                }
            }
        }
        return net_max;
    }
};