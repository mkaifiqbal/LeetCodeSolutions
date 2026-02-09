class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int maxi=0;
        int n = envelopes.size();
        sort(envelopes.begin(), envelopes.end(), [](vector<int>& a, vector<int>& b) {
            if(a[0] == b[0]) 
                return a[1] > b[1];   
            return a[0] < b[0];   
        });

        vector<int> dp;
        for(int i=0;i<n;i++){
            int temp=envelopes[i][1];
            auto it = lower_bound(dp.begin(),dp.end(),temp);

            if(it==dp.end()){
                dp.push_back(temp);
            }else{
                *it = temp;
            }
        }
        return dp.size();
    }
};