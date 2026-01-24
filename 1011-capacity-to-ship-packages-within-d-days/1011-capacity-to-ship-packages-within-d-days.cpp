class Solution {
public:
    bool check(vector<int>& weights, int days,int mid){
        int day=1;
        int curw=0;
        for(int i=0;i<weights.size();i++){
            int temp = curw+weights[i];
            if(temp<=mid){
                curw+= weights[i];

            }else{
                day++;
                curw=weights[i];
            }
        }
        return day<=days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n= weights.size();
        int l=INT_MIN;
        int r= 0;
        for(int i=0;i<n;i++){
            if(l<weights[i]) l= weights[i];
            r+= weights[i];
        }
        int ans=0;
        while(l<=r){
            int mid = (l+r)/2;
            if(check(weights,days,mid)){
                ans= mid;
                r = mid-1;
            }else l = mid+1;
        }
        return ans;
    }
};