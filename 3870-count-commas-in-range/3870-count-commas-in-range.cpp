class Solution {
public:
    int countCommas(int n) {
        int count=0;
        if(n<1000) return count;
        if(n>=1000) count = n-1000+1;
        // if(n>=100000) count = n -100000+1;
        return count;
    }
};