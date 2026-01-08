class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string pre = strs[0];
        for (int i = 1; i < n; i++) {
            while (strs[i].find(pre)!=0) {
                pre = pre.substr(0,pre.length()-1);
                if(pre=="") return "";
            }
        }
        return pre;
    }
};