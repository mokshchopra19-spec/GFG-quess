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
	void dfs(unordered_map<int, set<int>> &adjlist, unordered_map<int, bool>&visited, vector<int>&ans, int node) {
		ans.push_back(node);
		visited[node]=1;
		for(auto i : adjlist[node] ){
		    if(!visited[i]){
		        dfs(adjlist,visited,ans,i);
		    }
		}
		
	}
	vector<int> dfs(vector<vector<int>> & adj) {
		int n = adj.size() - 1;
		unordered_map<int, set<int>> adjlist;
		vector<int>ans;
		unordered_map<int, bool>visited;
		
		preAdjList(adjlist, adj);
		
		for (int i = 0 ; i<n; i++) {
			if (!visited[i]) {
				dfs(adjlist, visited, ans, i);
			}
		}
		return ans;
		
	}
};
