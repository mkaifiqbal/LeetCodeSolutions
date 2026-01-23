class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        int n= arr.size();
        for(int i=0; i<n;i++){
            pq.push({abs(x-arr[i]),arr[i]});
        }
        while(pq.size()!=k){
            pq.pop();
        }
        vector<int> ans;
        while(!pq.empty()){
            auto temp = pq.top();
            ans.push_back(temp.second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};