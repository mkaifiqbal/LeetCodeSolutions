class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> um={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int n= s.size();
        int pre=0;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(um[s[i]]<pre){
                ans -= um[s[i]];
            }else ans+= um[s[i]];
            pre= um[s[i]];
        }
        return ans;
    }
};