class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_map<int, int> count;
        // for(int i=0;i< nums.size();i++){
        //     if(count.find(nums[i])!=count.end()) return true;
        //     count[nums[i]] =1;
        // }

        unordered_set<int> fre;
        for(int i :nums){
            if(fre.count(i)) return true;
            fre.insert(i);
        }
        return false;
    }
};