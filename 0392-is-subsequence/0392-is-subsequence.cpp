class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a=0;
        int n=t.size();
        int m=s.size();
        for(int i=0;i<n;i++){
            if(m>a && t[i]==s[a]) a++;
        }
        return a==m;
    }
};