class Solution {
public:
    bool solve(int n, unordered_set<int>& used){
        if(n==1) return true;
        if(used.count(n)) return false;
        int temp =0;
        used.insert(n);
        while(n!=0){
            int rem= n%10;
            temp += rem*rem;
            n /=10;
        }
        return solve(temp,used);
    }

    bool isHappy(int n) {
        unordered_set<int> used;
        return solve(n,used);
    }
};