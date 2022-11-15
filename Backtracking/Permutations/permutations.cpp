class Solution {
public:

    void generateP(vector<int> &nums, vector<vector<int>> &res, int i){
        
        if(i == nums.size()){
            res.push_back(nums);
            return;
        }
        for(int j = i; j<nums.size(); j++){
            
            swap(nums[i],nums[j]);
            generateP(nums, res, i+1);
            swap(nums[j],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> res;
        generateP(nums, res, 0);
        return res;
    }
};
