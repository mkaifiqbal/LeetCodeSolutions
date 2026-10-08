class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n= nums.size();
        vector<string> vc;
        for(int i=0;i<n;i++){
            vc.push_back(to_string(nums[i]));
        }
        for(int i=0;i<n-1;i++){
            bool swapped = false;
            for(int j=0;j<n-i-1;j++){
                if(vc[j]+vc[j+1] < vc[j+1]+vc[j]) {
                    swap(vc[j],vc[j+1]);
                    swapped= true;
                }
            }
            if(!swapped) break;
        }
        if(vc[0]=="0")return "0";
        string ans="";
        for(int i=0;i<n;i++){
            ans+=vc[i];
        }
        return ans;
    }
};