class Solution {
public:
    bool vertical(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        
        long total = 0;
        for (auto &row : grid)
            for (int val : row)
                total += val;

        long curr = 0;
        for (int i = 0; i < n - 1; i++) {  // stop before last row
            for (int j = 0; j < m; j++) {
                curr += grid[i][j];
            }
            if (curr == total - curr) return true;
        }
        return false;
    }

    bool horizontal(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();

        long total = 0;
        for (auto &row : grid)
            for (int val : row)
                total += val;

        long curr = 0;
        for (int j = 0; j < m - 1; j++) {  // stop before last col
            for (int i = 0; i < n; i++) {
                curr += grid[i][j];
            }
            if (curr == total - curr) return true;
        }
        return false;
    }

    bool canPartitionGrid(vector<vector<int>>& grid) {
        return vertical(grid) || horizontal(grid);
    }
};