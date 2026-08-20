class Solution {
	public:
	void preAdjList(unordered_map<int, set<int>> &adjlist, vector<vector<int>> &adj) {
		for (int i = 0; i<adj.size(); i++) {
			int u = i;
			for (auto v: adj[u]) {
				adjlist[u].insert(v);
				adjlist[v].insert(u);
			}
		}
	}
	void bfs(unordered_map<int, set<int>> &adjlist, unordered_map<int, bool>&visited, vector<int>&ans, int node) {
		queue<int>q;
		q.push(node);
		visited[node] = 1;
		
		while (!q.empty()) {
			int frontnode = q.front();
			q.pop();
			ans.push_back(frontnode);
			for (auto i:adjlist[frontnode]) {
				if (!visited[i]) {
					q.push(i);
					visited[i] = 1;
				}
			}
		}
	}
	vector<int> bfs(vector<vector<int>> &adj) {
	    int n = adj.size() - 1;
		unordered_map<int, set<int>> adjlist;
		vector<int>ans;
		unordered_map<int, bool>visited;
		
		preAdjList(adjlist, adj);
		
		for (int i = 0 ; i<n; i++) {
			if (!visited[i]) {
				bfs(adjlist, visited, ans, i);
			}
		}
		return ans;
	}
};
