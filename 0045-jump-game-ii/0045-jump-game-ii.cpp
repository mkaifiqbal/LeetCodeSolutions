class Solution {
public:
    int solve(int indx, vector<int>&nums){
        if(indx>= nums.size()-1) return 0;

        int ans=INT_MAX;
        for(int i=indx+1;i<=indx+nums[indx];i++){
            int a= solve(i,nums);
            if(a!=INT_MAX) ans = min(ans,1+a);
        }
        return ans;
        
    }
    int jump(vector<int>& nums) {
        return solve(0,nums);
    }
};