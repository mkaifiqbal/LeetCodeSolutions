class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int a: nums){
            if(mp.count(a)) return a;
            else mp[a]++;
        }
        return 0;
    }
};