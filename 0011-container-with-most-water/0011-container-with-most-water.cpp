class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int maxarea=0;
        int left = 0, right = n - 1;
        for(int i = 0; i<n; i++)
        {
            int base = right - left;
            int area = base * min(height[left], height[right]);
            if(maxarea < area) maxarea = area;

            if(height[left] < height[right])left++;
            else right--;
        }
        
        return maxarea;
    }
};