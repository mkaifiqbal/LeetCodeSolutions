class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n= arr.size();
        int ans=0;
        if(n<k) return ans;
        int sum=0;
        for(int i=0; i<k;i++){
            sum+=arr[i];
        }
        for(int i=k;i<n;i++){
            int avg= sum/k;
            if(avg>=threshold) ans++;
            sum-=arr[i-k];
            sum+=arr[i];
        }
        if(sum/k >= threshold) ans++;
        return ans;
    }
};