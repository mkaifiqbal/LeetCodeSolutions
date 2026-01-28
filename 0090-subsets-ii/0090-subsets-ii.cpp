class Solution {
public:
    void solve(int i,vector<int> & nums,vector<vector<int>> &ans,vector<int> &temp){
        ans.push_back(temp);
        for(int j=i;j<nums.size();j++){
            if(j>i && nums[j-1]==nums[j]) continue;
            temp.push_back(nums[j]);
            solve(j+1,nums,ans,temp);
            temp.pop_back();
        }
        

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,nums,ans,temp);
        return ans;
    }
};