class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> fre;
        for(int i=0;i<nums.size();i++){
            fre[nums[i]]++;
        }

        priority_queue<pair<int,int>> pq;
        for(auto &a: fre){
            pq.push({a.second,a.first});
        }
        vector<int> ans;
        for(int i=0;i<k;i++){

            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};