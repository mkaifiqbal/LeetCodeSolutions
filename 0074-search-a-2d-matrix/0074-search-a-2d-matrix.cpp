class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m = matrix[0].size();

        int s=0;
        int end= n*m-1;

        while(s<=end){
            int mid= (s+end)/2;
            int r=mid/m;
            int c =mid%m;
            if(matrix[r][c]== target) return true;
            if(matrix[r][c]>target){
                end= mid-1;
            }else{
                s=mid+1;
            }
        }
        return false;



        // int n=matrix.size();
        // int m = matrix[0].size();
        // int l=0;
        // int r=m-1;
        // while(l < n && r >= 0){
        //     if(matrix[l][r]==target) return true;
        //     if(matrix[l][r]>target){
        //         r--;
        //     }else l++;
        // }
        // return false;
    }
};