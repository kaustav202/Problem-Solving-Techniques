class Solution {
public:
    int solve(int i, vector<int>& arr, int sum, int target, vector<vector<int>>& dp) {
        if (sum == target) return 0;
        if (i >= arr.size() || sum > target) return 1e9;
        if (dp[i][sum] != -1) return dp[i][sum];
        int take = 1 + solve(i, arr, sum + arr[i], target, dp);
        int not_take = solve(i + 1, arr, sum, target, dp);
        return dp[i][sum] = min(take, not_take);
    }
    
    int numSquares(int n) {
        vector<int> arr;
        for (int i = 1; i * i <= n; i++) {
            arr.push_back(i * i);
        }
        vector<vector<int>> dp(arr.size(), vector<int>(n + 1, -1));
        return solve(0, arr, 0, n, dp);
    }
};