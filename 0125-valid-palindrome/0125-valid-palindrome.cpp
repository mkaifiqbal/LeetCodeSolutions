class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(auto ch : s){
            if(isalpha(ch) || isdigit(ch)) a+= tolower(ch);
        }
        string b= a;
        reverse(b.begin(),b.end());
        return a==b;
    }
};