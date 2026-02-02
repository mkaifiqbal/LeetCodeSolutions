class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int r = 0;
        int n = gas.size();
        int balance = 0;
        int gassum=0;
        int costsum=0;
        for (int i = 0; i < n; i++) {
            balance += gas[i] - cost[i];
            gassum += gas[i];
            costsum += cost[i];
            if (balance < 0) {
                r = i + 1;
                balance = 0;
            }
        }
        if(gassum<costsum) return -1;
        return r % n;
    }
};