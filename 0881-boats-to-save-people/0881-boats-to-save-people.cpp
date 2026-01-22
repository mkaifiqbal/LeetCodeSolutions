class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int ans=0;
        int left=0;
        int right=n-1;
        while(left<=right){
            if(nums[left]+nums[right]<= limit){
                left++;    
            }
            right--;
            ans++;
        }
        
        return ans;
    }
};