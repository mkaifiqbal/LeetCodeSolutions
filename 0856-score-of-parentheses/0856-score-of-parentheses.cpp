class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> s1;
        //stack<int> s2;
        int ans=0;
        for(int i=0; i<s.size();i++){
            if(s[i]=='(') s1.push('(');
            if(!s1.empty() && s[i]==')' ){
                ans++;
                s1.pop();
            }
        }
        return ans;
    }
};