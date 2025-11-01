class Solution {
public:
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        int n = nums.size();
        __int128 p=1;
        for(int i=0; i<n;i++){
            p *= nums[i];
        }
        if(p / target == target){
            if(n==3){
                bool t=false;
                for(int j=0;j<n;j++){
                    if(nums[j]==target) t= true;
                }
                return t;
            }
            return true;
            
        } 
        else return false;
    }
};