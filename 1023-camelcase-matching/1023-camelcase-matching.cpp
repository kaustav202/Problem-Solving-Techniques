class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        int n = queries.size(),m=pattern.size();
        vector<bool> ans;
        for(int i=0;i<n;i++){
            int j=0,k=0;
            string ss;
            while(j<queries[i].size() && k<pattern.size()){
                if(queries[i][j]==pattern[k]){
                    ss+=pattern[k];
                    k++;
                }
                else if(queries[i][j]>=65 && queries[i][j]<=90) break;
                j++;
            }
            while(j<queries[i].size()){
                if(queries[i][j]>=65 && queries[i][j]<=90){
                    break;
                }
                j++;
            }
            ans.push_back(j>=queries[i].size() && k>=pattern.size() && ss==pattern);
        }
        return ans;
    }
};