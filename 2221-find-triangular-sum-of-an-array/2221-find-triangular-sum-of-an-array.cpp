class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<vector<int>> temp;
        temp.push_back(nums);
        int n= nums.size();
        for(int i=0;i< n-1;i++){
            vector<int> temp1;
            for(int j=1;j< n-i;j++){
                int sum=temp[i][j-1]+ temp[i][j];
                temp1.push_back(sum%10);
                
            }
            temp.push_back(temp1);
        }
        return temp.back()[0];
    }
};