class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n= nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                string a= to_string(nums[i]);
                string b= to_string(nums[j]);
                if(a+b < b+a) swap(nums[i],nums[j]);
            }
        }
        if(nums[0]==0)return "0";
        string ans="";
        for(int i=0;i<n;i++){
            ans+=to_string(nums[i]);
        }
        return ans;
    }
};