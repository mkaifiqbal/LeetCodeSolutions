class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        int n= arr.size();
        for(int i=0; i<n;i++){
            if(i<k) pq.push({abs(x-arr[i]),arr[i]});
            else{
                auto temp =pq.top();
                if(abs(x-arr[i])<temp.first){
                    pq.pop();
                    pq.push({abs(x-arr[i]),arr[i]});
                }
            }
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