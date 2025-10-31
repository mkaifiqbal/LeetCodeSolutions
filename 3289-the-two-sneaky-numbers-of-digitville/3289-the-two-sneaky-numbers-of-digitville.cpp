class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int arr[100]={0};
        vector<int> ans;
        for (int i : nums){
            if (arr[i]==0){
                arr[i] =1;
            }else ans.push_back(i);
        }
        return ans;
        
    }
};