class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        string ans="";
        unordered_map<char, int> mp;
        for(auto ch : s) mp[ch]++;

        vector<pair<char, int>> v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](auto &a, auto &b){
            return a.second > b.second;
        });
        for(auto &it: v){
            for(int i=0;i<it.second;i++) ans += it.first;
        }
        return ans;
     
    }
};