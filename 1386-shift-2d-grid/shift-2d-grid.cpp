class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int total = m * n;
        k %= total;

        vector<vector<int>> ans(m, vector<int>(n));

        for (int i = 0; i < total; i++) {
            int newIndex = (i + k) % total;

            ans[newIndex / n][newIndex % n] =
                grid[i / n][i % n];
        }

        return ans;
    }
};