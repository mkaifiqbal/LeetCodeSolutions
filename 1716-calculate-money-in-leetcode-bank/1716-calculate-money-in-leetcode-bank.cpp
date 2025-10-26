class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int mon =1;
        int counter =1;
        for(int i=1; i<=n;i++){
            total += counter;
            counter++;
            if (i%7==0){
                mon +=1;
                counter = mon;

            }

        }
        return total;
    }
};