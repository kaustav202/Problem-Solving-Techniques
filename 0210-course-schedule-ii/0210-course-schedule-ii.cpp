class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& preq, int i = 0) {
        vector<vector<int>> graph(n); vector<int> indgr(n,0), ans,emptyVector;
        for(auto it: preq) graph[it[1]].push_back(it[0]),indgr[it[0]]++;
        for(int i = 0;i<n;i++) if(!indgr[i]) ans.push_back(i);
        while(ans.size()<n and i<ans.size())  for(auto it: graph[ans[i++]]) if(--indgr[it]==0) ans.push_back(it);
        return ans.size()==n ? ans : emptyVector;
    }
};