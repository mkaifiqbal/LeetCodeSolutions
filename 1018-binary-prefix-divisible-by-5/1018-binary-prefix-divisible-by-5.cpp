class Solution {
public:

    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int state=0;
        for(int i=0;i<nums.size();i++){
            state=(state*2 +nums[i])%5;
            ans.push_back(state==0);
        }
        
        return ans;
    }
};


// class Solution {
// public:
//     bool div(string a){
//         int state=0;
//         for(char i:a){
//             int bit = i-'0';
//             state=(state*2 +bit)%5;
//         }
//         return state ==0;
//     }
//     vector<bool> prefixesDivBy5(vector<int>& nums) {
//         vector<bool> ans;
//         string a="";
//         for(int i=0;i<nums.size();i++){
//             a+= to_string(nums[i]);
//             ans.push_back(div(a));
//         }
//         return ans;
//     }
// };
