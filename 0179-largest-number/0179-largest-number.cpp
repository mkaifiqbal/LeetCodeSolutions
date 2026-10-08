class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n= nums.size();
        vector<string> vc;
        for(int i=0;i<n;i++){
            vc.push_back(to_string(nums[i]));
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){

                if(vc[i]+vc[j] < vc[j]+vc[i]) swap(vc[i],vc[j]);
            }
        }
        if(vc[0]=="0")return "0";
        string ans="";
        for(int i=0;i<n;i++){
            ans+=vc[i];
        }
        return ans;
    }
};