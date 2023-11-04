class Solution {
public:

    void recurfunc(vector<vector<int>>& matrix, vector<int> &ans, int left, int right, int top, int bottom)
    {
        if(top<=right && top<=bottom){
            for(int i=left;i<=right;i++){ //1st row
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int j=top;j<=bottom;j++){ //last col
                ans.push_back(matrix[j][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){ //last row
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if(left<=right){
                for(int j=bottom;j>=top;j--){ //1st col
                    ans.push_back(matrix[j][left]);
                }
                left++;
            }
            recurfunc(matrix, ans, left, right, top, bottom);
        }
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        recurfunc(matrix, ans, 0, n-1, 0, m-1);
        return ans;
    }
};