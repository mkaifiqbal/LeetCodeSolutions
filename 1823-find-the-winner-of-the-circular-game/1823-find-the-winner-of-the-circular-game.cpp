class Solution {
public:
    int findTheWinner(int n, int k) {
        // vector<int> ans;
        // for(int i=1;i<=n;i++){
        //     ans.push_back(i);
        // }
        // int indx=0;
        // while(ans.size()>1){
        //     indx = (indx+k-1) %ans.size();
        //     ans.erase(ans.begin()+indx);    
        // }
        // return ans[0];
        int indx=0;
        for(int i=0;i<n;i++){
            indx= (indx+k)%(n-1);
        }
        return indx+1;
    }
};