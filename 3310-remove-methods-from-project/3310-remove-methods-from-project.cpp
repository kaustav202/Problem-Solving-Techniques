class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& arr) {
        vector<vector<int>> mp(n);
        vector<int> vis(n, 0), res;

        int len = arr.size();
        for(int i = 0; i < len; i++){
            mp[arr[i][0]].push_back(arr[i][1]);
        }

        queue<int> q;
        q.push(k); // start node
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            vis[curr] = 1; // mark as visited (sus)

            vector<int> adj = mp[curr]; // neigbours
            for(int i : adj){
                if(vis[i] == 0) q.push(i);
            }
        }

        // add all nodes
        for(int i = 0; i < n; i++) res.push_back(i);

        for(int i = 0; i < len; i++){
            // one node is sus and the other is not
            if(vis[arr[i][0]] != vis[arr[i][1]]) return res;
        }

        res = {};
        // only add nodes which were not visited (not sus)
        for(int i = 0; i < n; i++){
            if(vis[i] == 0) res.push_back(i); 
        }

        return res;
    }
};