class Solution {
public:
    int countTriples(int n) {
        int count=0;
        unordered_set<int> sq;
        for(int i=1;i<=n;i++){
            sq.insert(i*i);
        }

        for(int i=1;i<=n;i++){
            int a= i*i;
            for(int j=i+1;j<=n;j++){
                int sum = a + j*j;
                if(sq.count(sum)) count++;
            }
        }
        return count*2;
    }
};