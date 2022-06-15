class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<int> res;
        string r;
        int l = indices.size();
        int i = 0;
        for(auto a:s){
            res.push_back(0);
        }
        for(auto a:s){
            res[indices[i]] = s[i];
            i++;
        }
        for(auto a:res){
            r += a;
        }
        return r;
    }
};