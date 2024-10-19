class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size(), res = 0;
        if(n < 3) return 0;
        vector<int> dp(n+1, 0);
        for(int i = 3; i <= n; i++) {
            dp[i] += dp[i-1] + i-2;
        }

        int i = 0, j;
        while(i < n) {
            if(i == n-1 || i == n-2) break;
            int temp = nums[i+1] - nums[i];
            for(j = i+2; j < n; j++) {
                int diff = nums[j] - nums[j-1];
                if(diff != temp) break;
            }
            int length = j-i;
            res += dp[length];
            i = j-1;
        }
        return res;
    }
};