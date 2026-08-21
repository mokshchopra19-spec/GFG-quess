class Solution {
	public:
	void preAdjList(unordered_map<int, set<int>> &adjlist, vector<vector<int>> &edges) {
		for (int i = 0; i<edges.size(); i++) {
			int u = edges[i][0];
			int v = edges[i][1];
			adjlist[u].insert(v);
			adjlist[v].insert(u);
			
		}
	}
	bool dfs(unordered_map<int, set<int>> &adjlist,int parent, unordered_map<int, bool>&visited, int node) {
		visited[node] = 1;
		for (auto i : adjlist[node]) {
			if (!visited[i]) {
				bool detected = dfs(adjlist, node, visited, i);
				if (detected)
					return true;
			}
			else if (i != parent)
				return true;
		}
		return false;
		
	}
	bool isCycle(int V, vector<vector<int>> & edges) {
		
		int n = edges.size() - 1;
		unordered_map<int, set<int>> adjlist;
		unordered_map<int, bool>visited;
		
		preAdjList(adjlist, edges);
		
		for (int i = 0 ; i<n; i++) {
			if (!visited[i]) {
				bool ans = dfs(adjlist, -1, visited, i);
				if (ans == 1)return true;
			}
		}
		return false;
		
	}
};
