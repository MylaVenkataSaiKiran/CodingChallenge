class Solution {
public:
    //Solution 2 : O(N+M)
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int i = m-1, j = 0;
        while(i>=0 && j<n){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j] > target){//to get smaller elems
                i--; //no need to change col as we come from left
            }
            else{
                j++; //decrease row as it has smaller elems
            }
        }
        return false;
    }

    // Solution 1 : O(N*logM)
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++){
            int l = 0, h = m-1;
            while(l <= h){
                int mid = (l+h)/2;
                if(matrix[i][mid]==target){
                    return true;
                }
                else if(matrix[i][mid] < target){
                    l = mid + 1;
                }
                else{
                    h = mid-1;
                }
            }
        }
        return false;
    }
};