class Solution {
public:
    bool solve(int indx,vector<int> &nums, vector<bool> &visit){
        if(indx>= nums.size()-1){
            return true;
        }
        if(!visit[indx]){
            visit[indx]=true;
            for(int i=indx+1;i<= indx+nums[indx];i++){
                if(solve(i,nums,visit)) return true;
            }
        }
        return false;
    }
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        vector<bool> visit(n,false);
        return solve(0,nums,visit);
    }
};