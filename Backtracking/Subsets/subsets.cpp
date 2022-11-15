class Solution {
public:

    void solve(vector<vector<int>> &res, vector<int> &nums,vector<int> sol, int i){
        if(i == nums.size()){
            res.push_back(sol);
            return;
        }
        int c = nums[i];
        solve(res,nums, sol, i+1);
        sol.push_back(c);
        solve(res,nums,sol,i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        vector<int> sol;
        solve(res,nums, sol, 0);
        return res;
    }
};
