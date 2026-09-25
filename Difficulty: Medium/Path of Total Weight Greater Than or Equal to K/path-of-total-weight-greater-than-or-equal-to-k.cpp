class Solution {
	public:
	bool dfs(vector<vector<pair<int, int>>> &adj, vector<int>&vis, int sum, int node, int k) {
		vis[node] = 1;
		
		if (sum >= k) {return true; }
		for (auto it:adj[node]) {
			int nbr = it.first;
			int wt = it.second;
			if (!vis[nbr]) {
				bool ans = dfs(adj, vis, sum+wt, nbr, k);
				if (ans)
					return true;
			}
		}
		vis[node] = 0;
		return false;
	}
	bool pathMoreThanK(int V, vector<vector<int>> & edges, int k) {
		vector<vector<pair<int, int>> > adj(V);
		vector<int>vis(V, 0);
		int sum = 0 ;
		for (auto e : edges) {
			int u = e[0];
			int v = e[1];
			int wt = e[2];
			adj[u].push_back({v, wt});
			adj[v].push_back({u, wt});
		}
		
		bool ans = dfs(adj, vis, sum, 0, k);
		if (ans)
			return true;
		
		return false;
	}
};
