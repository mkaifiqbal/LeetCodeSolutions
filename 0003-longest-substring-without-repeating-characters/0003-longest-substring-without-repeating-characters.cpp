class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        

        int ans=0;
        int n = s.size();
        for (int i =0; i<n;i++){
            unordered_map<char,int> alpha;
            int count =0;
            for(int j=i;j<n;j++){
                if (alpha.find(s[j]) != alpha.end()){
                    ans = max(ans,count);
                    count =0;
                    break;
                }else {
                    alpha[s[j]]=1;
                    count++;
                }
            }
            ans = max(ans,count);
        }
        
        return ans;
    }
};