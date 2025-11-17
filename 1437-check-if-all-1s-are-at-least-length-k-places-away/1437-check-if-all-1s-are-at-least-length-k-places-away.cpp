class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int c=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(c<k && c!=-1){
                    return false;
                }
                c=0;
            }
            if(c!=-1 && nums[i]==0) c++;
        }return true;
    }
};