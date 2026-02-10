class Solution {
public:
    int count=0;
    void solve(int pos, int n, vector<bool> & mark){
        if(pos>n){
            count++;
            return;
        }
        for(int i=1;i<=n;i++){
            if((i%pos==0 || pos%i==0) && !mark[i]){
                mark[i]= true;
                solve(pos+1,n,mark);
                mark[i]= false;
                
            }
        }
    }
    int countArrangement(int n) {
        vector<bool> mark(n+1,false);
        solve(1,n,mark);
        return count;
    }
};