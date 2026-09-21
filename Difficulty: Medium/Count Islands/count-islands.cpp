class Solution {
public:
    int countIslands(vector<vector<char>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        int dr[] = {0, 0, 1, -1, 1, -1, -1, 1};
        int dc[] = {1, -1, 0, 0, 1, -1, 1, -1};

        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == 'L') {

                    count++;

                    queue<pair<int, int>> q;
                    q.push({i, j});

                    // Mark starting cell visited
                    grid[i][j] = 'W';

                    while (!q.empty()) {

                        auto [r, c] = q.front();
                        q.pop();

                        for (int k = 0; k < 8; k++) {

                            int nr = r + dr[k];
                            int nc = c + dc[k];

                            if (nr >= 0 && nr < m &&
                                nc >= 0 && nc < n &&
                                grid[nr][nc] == 'L') {

                                grid[nr][nc] = 'W';
                                q.push({nr, nc});
                            }
                        }
                    }
                }
            }
        }

        return count;
    }
};