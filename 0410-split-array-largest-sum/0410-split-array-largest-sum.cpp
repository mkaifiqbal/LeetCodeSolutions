class Solution {
public:
        bool check(vector<int> &arr, int k,int n, int mid){
        int st=1;
        int sum=0;
        for(int i=0;i<n;i++){
            int temp = sum+arr[i];
            if(temp<=mid) sum=temp;
            else{
                sum= arr[i];
                st++;
            }
        }
        return st<=k;
        }
    int splitArray(vector<int>& arr, int k) {
        int n= arr.size();
        if(n<k) return -1;
        
        int l=INT_MIN;
        int r =0;
        for(int i=0; i<n;i++){
            if(l<arr[i]) l= arr[i];
            r += arr[i];
        }
        int ans=-1;
        
        while(l<=r){
            int mid = (l+r)/2;
            if(check(arr,k,n,mid)){
                ans =mid;
                r= mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
        
    }
};