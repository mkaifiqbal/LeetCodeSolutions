class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0;
        int n= nums.size();
        unordered_map<int,int> mp;
        mp[0]=1;
        int presum=0;
        for(int i=0 ;i<n;i++){
            presum+=nums[i];
            int rem = presum%k ;
            if(rem<0) rem+=k;
            count+= mp[rem];
            mp[rem]++;
        }
        return count;
    }
};