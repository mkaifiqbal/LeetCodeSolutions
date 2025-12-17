class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans;
        vector<long long> left;
        vector<long long> right(n);
        long long mul1 =1;
        long long mul2=1;
        for(int i=0;i<n;i++){
            mul1 *=nums[i];
            mul2 *=nums[n-i-1];
            left.push_back(mul1);
            right[n-i-1]=mul2;

        }
        for(int i=0;i<n;i++){
            if(i==0) ans.push_back(right[1]);
            else if(i==n-1) ans.push_back(left[i-1]);
            else ans.push_back(left[i-1]*right[i+1]);
        }
        
        return ans;

    }
};