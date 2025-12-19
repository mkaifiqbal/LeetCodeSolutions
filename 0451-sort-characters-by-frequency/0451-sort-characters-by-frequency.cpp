class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char, int> mp;
        for(auto ch : s) mp[ch]++;

        vector<pair<char, int>> v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](auto &a, auto &b){
            return a.second > b.second;
        });
        for(auto &it: v){
            ans.append(it.second,it.first);
        }
        return ans;
     
    }
};
