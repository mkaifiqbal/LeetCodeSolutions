class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n= nums.size();
        int pmax= nums[0];
        int curmax= nums[0];
        int pos=0;
        for(int i=1; i<n;i++){
            curmax = max(curmax,nums[i]);
            if(nums[i]<pmax){
                pmax=curmax;
                pos=i;
            }
        }
       
        return pos+1;
    }
};