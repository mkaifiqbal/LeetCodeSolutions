class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>> & ans, vector<int> &current, vector<bool> &vis){
        if(current.size()== nums.size()){
            ans.push_back(current);
            return;
        }

        for(int i=0; i<nums.size();i++){
            if(!vis[i]){
                vis[i]= true;
                current.push_back(nums[i]);
                solve(nums,ans,current,vis);
                current.pop_back();
                vis[i]= false;
            }
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        vector<bool> vis(nums.size(),false);
        solve(nums,ans,current,vis);
        return ans;
    }
};