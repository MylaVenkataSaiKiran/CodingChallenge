//Solution 2 : O(log(M*N))
bool searchMatrix(vector<vector<int>> & mat, int target){
    int n = mat[0].size();
    int m = mat.size();
    int low = 0, high = n*m-1;

    while(low <= high){
        int mid = (low+high)/2;
        //making each row size by size to make 1D array
        int row = mid/n;
        int col = mid%n;

        if(mat[row][col]==target){
            return true;
        }
        else if(mat[row][col] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return false;
}


// Solution 1 : O(logM*logN)
bool searchArray(vector<int> arr, int target){
    int low = 0, high = arr.size()-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid]==target){
            return true;
        }
        else if(arr[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int low = 0, high = mat.size()-1;//vertical index

    while(low <= high){
        int mid = (low + high)/2;
        if(mat[mid][0]<=target && target<=mat[mid][mat[0].size()-1]){
            return searchArray(mat[mid], target);
        }
        else if(mat[mid][0] > target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return false;
}