class Solution {
public:
    int hIndex(vector<int>& c) {
        int n = c.size();
        vector<int> v(n+1);
        for(int &num:c){
            if(num>=n) v[n]++;
            else v[num]++;
        }
        // for(int a :v){
        //     cout<<a<<" ";
        // }
        int sum=0;
        for(int i=n;i>=0;i--){
            sum+=v[i];
            if(sum>= i) return i;
        }
        return 0;
    }
};