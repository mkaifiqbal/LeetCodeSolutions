class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        int cur=1;
        int pre=1;
        ans.push_back(cur);
        for(int i=2;i<=n;i++){
            if(cur*10 <= n){
                cur *=10;
                ans.push_back(cur);
            }else{
                if(cur+1<=n){
                    cur+=1;
                    ans.push_back(cur);
                }else{
                    cur =pre+1;
                    pre +=1;
                    ans.push_back(cur);

                }
            }
        }
        return ans;
    }
};