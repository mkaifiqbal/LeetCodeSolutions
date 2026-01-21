class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int i=1; i<nums.size();i++){
            if(nums[i]==nums[i-1]) return nums[i];
        }
        for(int i=1; i<nums.size()-1;i++){
            if(nums[i-1]==nums[i+1]) return nums[i-1];
        }
        
        return nums[0];
    }
};