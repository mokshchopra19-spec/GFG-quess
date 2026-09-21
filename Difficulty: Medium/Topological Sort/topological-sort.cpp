class Solution {
	public:
	vector<int> topoSort(int V, vector<vector<int>> & edges) {
		vector<vector<int>> adj(V);
		
		for (auto edge : edges) {
			int u = edge[0];
			int v = edge[1];
			
			adj[u].push_back(v);
		}
		// Calculate indegree
		vector<int> indegree(V, 0);
		
		for (int u = 0; u < V; u++) {
			for (auto v : adj[u]) {
				indegree[v]++;
			}
		}
		queue<int> q;
		
		for (int i = 0; i < V; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}
		
		vector<int> ans;
		// BFS
		while (!q.empty()) {
			
			int node = q.front();
			q.pop();
			
			ans.push_back(node);
			
			for (auto neighbour : adj[node]) {
				
				indegree[neighbour]--;
				
				if (indegree[neighbour] == 0) {
					q.push(neighbour);
				}
			}
		}
		// Cycle exists
		if (ans.size() != V)
			return {};
		
		return ans;
		
	}
};
