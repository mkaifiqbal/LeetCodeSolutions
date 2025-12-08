class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> fre1;
        map<char,int> fre2;
        for(char ch:s){
            fre1[ch]++;
        }
        for(char ch:t){
            fre2[ch]++;
        }
        return fre1==fre2;
    }
};