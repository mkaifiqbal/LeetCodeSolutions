class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int temp = n-1;
        if(digits[n-1]<9){
            digits[n-1] +=1;
            return digits;
        }else{
            while(temp>=0 && digits[temp]==9){
                digits[temp]=0;
                temp--;
            }
        }
        if(temp== -1){
            digits.insert(digits.begin(),1);
        }else{
            digits[temp] +=1;
        }
        return digits;
    }
};