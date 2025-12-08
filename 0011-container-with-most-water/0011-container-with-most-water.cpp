class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left=0;
        int right =n-1;
        int area=0;
        for(int i=0;i<n;i++){
            int temp = min(height[left],height[right]) * (right -left);
            if(height[left]>height[right]) right--;
            else left++;
            area = max(area,temp);
        }
        return area;

    }
};