class Solution {
public:
    int numRabbits(vector<int>& ans) {
        unordered_map<int,int> mp;
        for(int i=0; i<ans.size();i++){
            mp[ans[i]]++;
        }
        int ans1=0;
        for(auto &a:mp){
            int b= a.first;
            int c = a.second;
            int grps = b+1;
            int grp = (c+grps-1)/(b+1);
            ans1+= grp * grps;
            
        }
        return ans1;
    }
};