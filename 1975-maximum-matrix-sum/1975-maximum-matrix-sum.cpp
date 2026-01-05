class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int neg=0;
        int n= matrix.size();
        int minele = INT_MAX;
        long long sum =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]<0){
                    neg++;
                    matrix[i][j] = (-1*matrix[i][j]);
                }
                sum += matrix[i][j];
                if(matrix[i][j]<minele) minele = matrix[i][j];
            }
        }
        if(neg %2==0) return sum;
        return sum-(2*minele);
       
    }
};