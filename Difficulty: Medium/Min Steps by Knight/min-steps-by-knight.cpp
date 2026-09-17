class Solution {
public:
    int minStepToReachTarget(vector<int>& knightPos,
                             vector<int>& targetPos, int n) {

        int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
        int dc[] = {-1, 1, -1, 1, 2, -2, 2, -2};

        if (knightPos == targetPos)
            return 0;

        int kr = knightPos[0];
        int kc = knightPos[1];

        int tr = targetPos[0];
        int tc = targetPos[1];

        int count = 0;

        queue<pair<int, int>> q;
        q.push({kr, kc});

        vector<vector<bool>> visited(n + 1,vector<bool>(n + 1, false));

        visited[kr][kc] = true;

        while (!q.empty()) {

            int size = q.size();

            while (size--) {

                auto [r, c] = q.front();
                q.pop();

                for (int i = 0; i < 8; i++) {

                    int nr = r + dr[i];
                    int nc = c + dc[i];

                    if (nr >= 1 && nr <= n &&
                        nc >= 1 && nc <= n &&
                        !visited[nr][nc]) {

                        if (nr == tr && nc == tc)
                            return count + 1;

                        visited[nr][nc] = true;
                        q.push({nr, nc});
                    }
                }
            }

            count++;
        }

        return -1;
    }
};