class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0]!=0) return false;

        vector<vector<int>> v = {{-1,-2},{-2,-1},{1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1}};

        int row = 0, col = 0;

        for (int i = 1; i < n * n; i++) {
            bool found = false;

            for (auto &m : v) {
                int newrow = row + m[0];
                int newcol = col + m[1];

                if (newrow >= 0 && newcol >= 0 && newrow < n && newcol < n &&
                    grid[newrow][newcol] == i) {
                    row = newrow;
                    col = newcol;
                    found = true;
                    break;
                }
            }

            if (!found) return false;
        }

        return true;
    }
};
