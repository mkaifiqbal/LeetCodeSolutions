class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l =0;
        int r =1;
        for(int i=1; i<nums.size();i++){
            if(nums[l]==nums[i]) continue;
            else{
                nums[l+1]=nums[i];
                l++;
            }
        }
        return l+1;
    }
};