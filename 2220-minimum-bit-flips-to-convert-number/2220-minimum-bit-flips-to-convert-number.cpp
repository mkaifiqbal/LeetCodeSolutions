class Solution {
public:
    vector<int> binary(int n){
        vector<int> ans;
        while(n>0){
            if(n%2==0) ans.push_back(0);
            else ans.push_back(1);
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int minBitFlips(int start, int goal) {
        vector<int> a= binary(start);
        vector<int> b= binary(goal);
        long long n= a.size();
        long long m =b.size();

        long long c= min(n,m);
        int count =0;
        for(int i=c;i>0;i--){
            if(a[n-1]!=b[m-1]) count++;
            n--;
            m--;
        }
        if(n){
            for(int i=0;i<n;i++){
                if(a[i]==1) count++;
            }
        }
        if(m){
            for(int i=0;i<m;i++){
                if(b[i]==1) count++;
            }
        } 
        return count;       
    }
};