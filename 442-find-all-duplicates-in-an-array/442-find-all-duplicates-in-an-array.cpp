class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> m;
        
        for(auto a: nums)m[a]++;
        for(auto a:nums){
            if(m[a]==2){
                 res.push_back(a);
                m[a] = -1;
            }
        }
        return res;
    }
};