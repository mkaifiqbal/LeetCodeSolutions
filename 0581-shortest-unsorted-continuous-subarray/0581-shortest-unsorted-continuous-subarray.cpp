class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        for(int i=1; i<n;i++){
            if (nums[i]>=nums[i-1]) count++;
            else break;
        }
        if(count==n-1) return 0;
       
        for(int j=n-2;j>=0;j--){
            if(nums[j]<=nums[j+1]) count++;
            else break;
        }
        return n-count;
    }
};