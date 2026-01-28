class Solution {
public:
    vector<vector<bool>> mark;
    vector<vector<string>> ans;

    bool isQueenSafe(int r, int c) {
        for (int i = 0; i < r; i++) {
            if (mark[i][c] == true)
                return false;
        }

        int a = r - 1, b = c - 1;
        while (a >= 0 && b >= 0) {
            if (mark[a][b] == true)
                return false;
            a--;
            b--;
        }

        a = r - 1, b = c + 1;
        while (b < mark.size() && a >= 0) {
            if (mark[a][b] == true)
                return false;
            a--;
            b++;
        }
        return true;
    }

    void solve(int row, int n) {
        if (row == n) {
            vector<string> board;
            for (int i = 0; i < n; i++) {
                string temp = "";
                for (int j = 0; j < n; j++) {
                    if (mark[i][j] == true) {
                        temp += "Q";
                    } else
                        temp += ".";
                }
                board.push_back(temp);
            }
            ans.push_back(board);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (isQueenSafe(row, i)) {
                mark[row][i] = true;
                solve(row + 1, n);
                mark[row][i] = false;
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        mark.assign(n, vector<bool>(n, false));

        solve(0, n);
        return ans;
    }
};