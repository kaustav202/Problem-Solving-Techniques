class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(auto &pr:mp){
            if(pr.second==1){
                int ans1 = pr.first;
                ans.push_back(ans1);
                if(ans.size()==2){
                    break;
                }
            }
        }
        return ans;
    }
};