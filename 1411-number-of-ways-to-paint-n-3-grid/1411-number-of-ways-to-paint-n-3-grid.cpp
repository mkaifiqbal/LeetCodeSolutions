class Solution {
public:
    int numOfWays(int n) {
        const int MOD = 1e9 +7;
        long long twocol=6;
        long long threecol=6;
        for(int i=2;i<=n;i++){
            long long newtwo = (twocol *3+threecol*2)%MOD;
            long long newthree = (twocol * 2 + threecol*2) %MOD;
            twocol = newtwo;
            threecol= newthree;
        }


        return (twocol+threecol)%MOD;
    }
};