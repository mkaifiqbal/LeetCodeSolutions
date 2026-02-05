class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int n= nums.size();
        for(int i=0;i<n;i++){
            int temp =nums[i];
            if(temp>=0){
                ans[i]=nums[(i+temp)%n];
            }else{
                ans[i]=nums[((i+temp)%n + n)%n];
            }
        }
        return ans;
    }
};