class Solution {
public:
    bool solve(int indx,int row, int col, int n, int m, vector<vector<char>>& board, string& word){
        if(indx==word.size()) return true;
        if(row<0 || col<0 || row>=n || col>=m)  return false;
        if (board[row][col] != word[indx]) return false;

        char temp = board[row][col];
        board[row][col] = '#';

        bool found =
            solve(indx+1,row+1,col,n,m,board,word) ||
            solve(indx+1,row-1,col,n,m,board,word) ||
            solve(indx+1,row,col+1,n,m,board,word) ||
            solve(indx+1,row,col-1,n,m,board,word);
        board[row][col] = temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m= board[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(solve(0,i,j,n,m,board,word)) return true;
                
            }
        }
        return false;
        
    }
};