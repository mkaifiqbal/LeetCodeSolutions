class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int sub1= INT_MAX;
        int ans=0;
        for(int i=0; i<n-2;i++){
            int a= i+1;
            int b=n-1;
            while(a<b){
                int temp = nums[i]+nums[a]+nums[b];
                int sub = abs(temp-target);
                if(temp>=target){
                    b--;
                }else a++;
                if(sub<sub1) {
                    ans = temp;
                    sub1= sub;
                }
            }
        }
        return ans;
    }
};