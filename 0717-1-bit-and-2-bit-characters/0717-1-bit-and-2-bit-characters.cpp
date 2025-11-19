class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n= bits.size();
        if (n==1) return true;
        int i=0;
        while (i<n-1){
            if(bits[i]==1) i+=2;
            else i++;
        }
        cout<<i;
        if(i==n) return false;
        else return true;
    }
};