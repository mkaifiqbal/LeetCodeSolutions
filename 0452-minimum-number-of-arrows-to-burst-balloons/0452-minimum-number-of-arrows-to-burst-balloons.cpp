class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](const vector<int>& a, const vector<int>& b) {
             return a[1] < b[1];   
         });

        int count=1;
        int last = points[0][1];
        for(int i=0;i<points.size();i++){
            if(last<points[i][0]){
                count++;
                last= points[i][1];
            }
        }
        return count;
    }
};