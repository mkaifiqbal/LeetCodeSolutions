class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<pair<int,int>> vc;
        int n= arr.size();
        vector<int> ans(n);
        for(int i=0; i<n;i++){
            vc.push_back({arr[i],i});
        }
        sort(vc.begin(),vc.end());
        int rank=1;
        for(int i=0;i<n;i++){
            if(i!=0 && vc[i].first!=vc[i-1].first){
                rank++;
            }
            ans[vc[i].second]=rank;
        }
        return ans;
    }
};