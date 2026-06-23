class Solution {
public:
    string largestMerge(string word1, string word2) {
        int a=word1.size();
        int b=word2.size();
        int c=0;
        int d=0;
        string ans="";
        while(c<a&& d<b){
            if(word1[c]>word2[d]){
                ans+=word1[c];
                c++;
            }else if(word1[c]<word2[d]){
                ans+=word2[d];
                d++;
            }else {
                if(word1.substr(c) > word2.substr(d)) {
                    ans += word1[c];
                    c++;
                }
                else {
                    ans += word2[d];
                    d++;
                }
            }
        }
        while(c<a){
            ans+=word1[c];
            c++;
        }
        while(d<b){
            ans+=word2[d];
            d++;
        }
        return ans;
    }
};