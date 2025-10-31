class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        int temp =x;
        long long n=0;
        while(temp !=0){
            int rem = temp%10;
            temp /=10;
            n = 10*n + rem;
        }
        if (n == x) return true;
        return false;
    }
};