class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n= nums.size();
        int odd=1;
        int even=0;
        while(even<n || odd<n){
            if(even<n && nums[even]%2==0){
                even+=2;
            }else if(odd<n && nums[odd]%2==1){
                odd+=2;
            }else{
                swap(nums[even],nums[odd]);
            }
        }
        return nums;
        
    }
};