class Solution {
public:
    int reverse(int x) {
        long int ans=0;
        long int count=1;
        int temp =x;
        while (temp!=0){
            temp /=10;
            count*=10;
        }
        while (x !=0){
            count /=10;
            int rem =x%10;
            ans = ans + rem*count;
            x/=10;
        }
        if (ans >2147483647 || ans < -2147483647) return 0;
        return ans;
    }
};