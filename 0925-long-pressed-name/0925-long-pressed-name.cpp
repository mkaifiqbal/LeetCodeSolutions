class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.size();
        int m = typed.size();
        if(n>m) return false;
        int a =0;
        int b=0;
        while(a<n && b <m){
            if(name[a]== typed[b]){
                a++;
                b++;
            }else if(a!=0 && name[a]!=typed[b] && name[a-1]==typed[b] ) b++;
            else return false;
        }
        while(b!=m){
            if(name[a-1]==typed[b]) b++;
            else return false;
        }
        if(a< n) return false;
        return true;
    }
};