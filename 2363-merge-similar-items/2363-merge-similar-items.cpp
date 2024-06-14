class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) 
    {
        map<int,int>mp;
        for(auto val:items1)
            mp[val[0]] += val[1];
        for(auto val:items2)
            mp[val[0]] += val[1];

        vector<vector<int>>ans;
        for(auto [a,b]:mp)
            ans.push_back({a, b});
        return ans;
    }
};