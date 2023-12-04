class Solution {
public:
    //solution O(N*logM)
    int findmax(vector<vector<int>> mat, int mid){
        int maxele = -1, row = -1;
        for(int i=0; i<mat.size(); i++){
            if(maxele < mat[i][mid]){
                maxele = mat[i][mid];
                row = i;
            }
        }
        return row;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int l=0, h=m-1;
        while(l <= h){
            int mid = (l + h)/2;
            int row = findmax(mat, mid);
            //edge cases
            int left = mid == 0 ? -1 : mat[row][mid-1];
            int right = mid == m-1 ? -1 : mat[row][mid+1];

            if(left < mat[row][mid] && mat[row][mid] > right){
                return {row, mid};
            }
            else if(left > mat[row][mid]){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return {-1,-1};
    }
};