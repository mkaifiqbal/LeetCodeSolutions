class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum=0;
        int n = operations.size();
        for (int i=0;i<n;i++){
            if (operations[i]=="++X"  || operations[i]=="X++") sum+=1;
            else sum -=1;
        }
        return sum;
    }
};