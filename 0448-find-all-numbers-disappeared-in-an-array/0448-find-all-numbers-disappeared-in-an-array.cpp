class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n= nums.size();
        vector<int> arr(n+1,0);
        vector<int> ans;
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        for(int j=1;j<n+1;j++){
            if(arr[j]==0) ans.push_back(j);
        }
        return ans;
    }
};