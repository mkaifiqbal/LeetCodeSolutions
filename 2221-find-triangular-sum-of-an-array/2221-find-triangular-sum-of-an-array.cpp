class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<vector<int>> temp;
        temp.push_back(nums);
        int n= nums.size();
        for(int i=0;i< n-1;i++){
            vector<int> temp1;
            for(int j=1;j< n-i;j++){
                int sum=temp[0][j-1]+ temp[0][j];
                temp1.push_back(sum%10);
                
            }
            temp.pop_back();
            temp.push_back(temp1);
        }
        return temp[0][0];
    }
};