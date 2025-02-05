class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int firstIndex = -1, secondIndex = -1;
        int count = 0;

        for(int i  =0; i<s1.length();i++)
        {
            if(s1[i] != s2[i] && count == 0)
            {
                firstIndex = i;
                count++;
            }else if(s1[i] != s2[i] && count == 1)
            {
                secondIndex = i;
                count++;
            }
            if(count > 2) return false;
        }
        if(firstIndex != -1 && secondIndex != -1) swap(s2[firstIndex],s2[secondIndex]);
        if(s1 == s2) return true;
        return false;
    }
};