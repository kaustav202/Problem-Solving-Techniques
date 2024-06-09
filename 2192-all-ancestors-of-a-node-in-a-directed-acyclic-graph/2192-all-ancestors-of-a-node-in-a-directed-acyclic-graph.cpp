class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>> &edges)
	{
		vector<int> adj[n];
		int m = edges.size();
		for (int i = 0; i < m; i++)
		{
			adj[edges[i][0]].push_back(edges[i][1]);
		}
		vector<int> indeg(n, 0);
		for (int i = 0; i < n; i++)
		{
			for (auto adjnode : adj[i])
			{
				indeg[adjnode]++;
			}
		}
		queue<int> q;
		for (int i = 0; i < n; i++)
		{
			if (indeg[i] == 0)
				q.push(i);
		}
		vector<int> toposort;
		vector<vector<int>> ans(n);
		while (!q.empty())
		{
			int node = q.front();
			q.pop();
			toposort.push_back(node);
			for (auto adjnode : adj[node])
			{
				indeg[adjnode]--;
				if (find(ans[adjnode].begin(), ans[adjnode].end(), node) == ans[adjnode].end())
					ans[adjnode].push_back(node);
				for (int i = 0; i < ans[node].size(); i++)
				{
					if (find(ans[adjnode].begin(), ans[adjnode].end(), ans[node][i]) == ans[adjnode].end())
					{
						ans[adjnode].push_back(ans[node][i]);
					}
				}
				if (indeg[adjnode] == 0)
				{
					q.push(adjnode);
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			sort(ans[i].begin(), ans[i].end());
		}
		return ans;
	}
};