class Solution {
public:
    bool hasSameDigits(string s) {
        string temp =s;
        string newstr="";
        int n=s.size();
        while(n!=2){
            newstr="";
            for (int i=1;i<n;i++){
                int sum= (temp[i-1]-'0') + (temp[i]-'0');
                newstr += to_string(sum%10);
            }
            temp = newstr;
            n = temp.size();            

        }
        return (newstr[0] == newstr[1]);
        
    }
};