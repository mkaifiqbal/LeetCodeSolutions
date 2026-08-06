class Solution {
public:
    int product(int n){
        int ans=1;
        while(n){
            int rem=n%10;
            ans *=rem;
            n/=10;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        while(product(n)%t!=0){
            n+=1;
        }
        return n;
    }
};