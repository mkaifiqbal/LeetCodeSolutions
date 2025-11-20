class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int dup=-1;
        int n=nums.size();
        int acsum= nums[0];
        int expsum= n *(n+1)/2;
        for(int i=1;i<nums.size();i++){
            acsum += nums[i];
            if(nums[i]==nums[i-1]){
                dup =nums[i];
            }
        }
        
        cout<<expsum<<" "<<acsum;
        return {dup,dup+(expsum-acsum)};
    }
};