class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hash;
        vector<vector<string>> ans;
        for(auto s:strs){
            string temp =s;
            sort(temp.begin(),temp.end());
            hash[temp].push_back(s);
        }
        for(auto &s1: hash){
            ans.push_back(s1.second);
        }

        return ans;
        
        
    }
};