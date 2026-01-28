class Solution {
public:
    void solve(int open,int close, int n, vector<string> &ans,string temp){
        if(open==n && close==n){
            ans.push_back(temp);
            return;
        }
        if(open<n){
            solve(open+1,close,n,ans,temp+"(");
        }
        if(close<open){
            solve(open,close+1,n,ans,temp+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        
        solve(0,0,n,ans,"");
        return ans;
    }
};