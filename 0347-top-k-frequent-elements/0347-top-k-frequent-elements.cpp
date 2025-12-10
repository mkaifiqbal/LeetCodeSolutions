class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> fre;
        for(int i=0;i<nums.size();i++){
            fre[nums[i]]++;
        }
        vector<pair<int,int>> sor(fre.begin(),fre.end());
        sort(sor.begin(),sor.end(),[](const pair<int,int> &a, const pair<int,int> &b){
            return a.second > b.second;
        });
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(sor[i].first);
        }
        return ans;
    }
};