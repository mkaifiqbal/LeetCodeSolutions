class Solution {
public:
    bool solve(int indx,vector<int>&nums, vector<bool> &vis){
        if(indx>=nums.size()-1){
            return true;
        }
        for(int i=1; i<=nums[indx];i++){
            if(indx+i<nums.size() &&  !vis[indx+i]){
                vis[indx+i]= true;
                if(solve(indx+i,nums,vis)){
                    return true;
                }
            }
        }
        return false;
    }
    bool canJump(vector<int>& nums) {
        vector<bool> vis(nums.size(),false);
        return solve(0,nums,vis);
    }
};