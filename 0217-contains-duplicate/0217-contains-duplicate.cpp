class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> count;
        for(int i=0;i< nums.size();i++){
            if(count.find(nums[i])!=count.end()) return true;
            count[nums[i]] =1;
        }
        return false;
    }
};