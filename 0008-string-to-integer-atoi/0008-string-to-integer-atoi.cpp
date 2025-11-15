class Solution {
public:
    int myAtoi(string s) {
        bool neg =false;
        int i=0;
        int n= s.size();
        while(i < n && s[i] == ' ') i++;
        if(s[i]=='-'|| s[i]=='+'){
            if(s[i]=='-'){
                neg =true;
                i++;
            }else{
            i++;

            }
        } 
        long long ans=0;
        for(int j=i;j<n;j++){
            if(isdigit(s[j])){
                int digit = s[j] - '0';
                if (!neg && ans > (INT_MAX - digit) / 10)
                    return INT_MAX;

                if (neg && -ans < (INT_MIN + digit) / 10)
                    return INT_MIN;
                ans =ans*10 +(s[j]-'0');     
            }
            else {
                if(neg) ans*= -1;
                return ans;
            }


        }
        if(neg) ans*= -1;
        if(ans < INT_MIN) ans = INT_MIN;
        if(ans > INT_MAX) ans = INT_MAX;
        return ans;
        
    }
};