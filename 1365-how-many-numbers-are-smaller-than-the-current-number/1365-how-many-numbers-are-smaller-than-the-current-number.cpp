class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sol;
        
        for(int i=0; i<nums.size(); i++){
            int tc = 0;
            for(int j=0; j<nums.size(); j++){
                if(i!=j && nums[j] < nums[i]){
                    tc++;
                }
            }
            sol.push_back(tc);
        }
        
        return sol;
    }
};