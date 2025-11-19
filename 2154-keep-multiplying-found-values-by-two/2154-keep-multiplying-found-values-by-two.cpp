class Solution {
public:
    bool binary(vector<int>& nums, int target){
        int start=0;
        int end = nums.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]==target) return true;
            if(nums[mid]>target){
                end = mid-1;
            }else{
                start= mid+1;
            }
        }
        return false;
    }
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        int ans=original;
        while(binary(nums,ans)){
            ans= ans*2;
        }
        return ans;
    }
};