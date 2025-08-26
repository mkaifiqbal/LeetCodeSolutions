class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double max1=0;
        int area=0;
        for (int i=0; i<dimensions.size();i++){
            double digonal =sqrt(dimensions[i][0]*dimensions[i][0] + dimensions[i][1]*dimensions[i][1]);
            if (digonal>max1){
                max1= digonal;
                area = dimensions[i][0]*dimensions[i][1];
            }else if (digonal == max1){
                area = max(area, (dimensions[i][0]*dimensions[i][1]));
            }
        }
        return area;
    }
};