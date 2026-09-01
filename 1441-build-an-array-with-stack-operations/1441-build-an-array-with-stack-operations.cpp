class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int indx=0;
        for(int i=1; i<=n && indx<target.size();i++){
            ans.push_back("Push");
            if(target[indx]==i){
                indx++;
            }else{
                ans.push_back("Pop");
            }
        }
        
        
        return ans;
        
    }
};