class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int ans=1;
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]) continue;
            else if(nums[i-1]==nums[i]-1) count++;
            else{
                ans = max(ans,count);
                count=1;
            }

        }
        return max(ans,count);
    }
};