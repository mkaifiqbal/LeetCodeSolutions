class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        for(int i=s.size()-1; i>=0;i--){
            if(isalpha(s[i])){
                count++;
            }else if(count !=0 ){
                return count;
            }
        }
        return count;
       
    }
};