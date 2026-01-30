class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int maxi = INT_MIN;
        for(int i=0; i<trips.size();i++){
            maxi = max(maxi, trips[i][2]);
        }
        vector<int> ans(maxi+1,0);
        for(int i=0;i<trips.size();i++){
            ans[trips[i][1]] += trips[i][0];
            ans[trips[i][2]] -= trips[i][0];
        }
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum += ans[i];
            if(sum>capacity) return false;
        }
        return true;
    }
};