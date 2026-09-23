class Solution {
	public:
	bool dfs(int node, int c, vector<int>& color,
	vector<vector<int>> & adj) {
		
		color[node] = c;
		
		for (auto nbr : adj[node]) {
			
			if (color[nbr] == -1) {
				if (!dfs(nbr, 1 - c, color, adj))
					return false;
			}
			else if (color[nbr] == color[node]) {
				return false;
			}
		}
		
		return true;
	}
	
	bool isBipartite(int V, vector<vector<int>> & edges) {
		vector<int> color(V, -1);
		vector<vector<int>> adj(V);
		
		for (auto edge : edges) {
			int u = edge[0];
			int v = edge[1];
			
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		for (int i = 0; i < V; i++) {
			if (color[i] == -1) {
				if (!dfs(i, 0, color, adj))
					return false;
			}
		}
		
		return true;
	}
};
