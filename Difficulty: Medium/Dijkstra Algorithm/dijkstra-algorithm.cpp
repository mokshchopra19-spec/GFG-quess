class Solution {
	public:
	vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
		
		vector<vector<pair<int, int>> > adj(V);
		
		// adjacency list
		for (auto edge : edges) {
			int u = edge[0];
			int v = edge[1];
			int wt = edge[2];
			
			adj[u].push_back({v, wt});
			adj[v].push_back({u, wt});
		}
		
		vector<int> dist(V, INT_MAX);
		
		priority_queue<pair<int, int>,
		vector<pair<int, int>>,
		greater<pair<int, int>> > pq;
		
		dist[src] = 0;
		pq.push({0, src});
		
		while (!pq.empty()) {
			auto [d, node] = pq.top();
			pq.pop();
			if (d != dist[node])
				continue;
			for (auto [nbr, wt] : adj[node]) {
				if (d + wt < dist[nbr]) {
					dist[nbr] = d + wt;
					pq.push({dist[nbr], nbr});
				}
			}
		}
		
		return dist;
	}
};
