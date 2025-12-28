class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(auto &a : grid){
            for(int el : a){
                if(el<0) count++;
            }
        }
        return count;
    }
};