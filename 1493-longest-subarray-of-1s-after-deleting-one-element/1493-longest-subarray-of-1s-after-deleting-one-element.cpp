class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n= nums.size();
        int pre=0;
        int next=0;
        int ans=0;
        for(int i=0; i<n;i++){
            int temp = pre+next;
            if(nums[i]==0){
                pre = next;
                next=0;
                ans = max(temp, ans);

            }else{
                next++;
            }
        }
        ans = max(ans,pre+next);
        if(ans==n) return ans-1;
        return ans;
    }
};