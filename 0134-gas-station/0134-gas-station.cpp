class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int r = 0;
        int n = gas.size();
        int balance = 0;
        int total=0;
        for (int i = 0; i < n; i++) {
            balance += gas[i] - cost[i];
            total += gas[i] - cost[i];
            if (balance < 0) {
                r = i + 1;
                balance = 0;
            }
        }
        if(total<0) return -1;
        return r;
    }
};