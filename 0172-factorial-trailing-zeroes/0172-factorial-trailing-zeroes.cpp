class Solution {
public:
    int solve(int n){
        if(n<5) return 0;
        
        return n/5+solve(n/5);
    }


    int trailingZeroes(int n) {
        return solve(n);
    }
};