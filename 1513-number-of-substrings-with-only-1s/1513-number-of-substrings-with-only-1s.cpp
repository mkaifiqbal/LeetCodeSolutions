class Solution {
public:
    int numSub(string s) {
        long long count=0;
        long long ans =0;
        long long mod = 1000000007;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }else{
                ans += (((count+1)*count /2)% mod) % mod;
                count=0;
            }
        }
        return ((ans+(count+1)*count /2)% mod) % mod;
    }
};