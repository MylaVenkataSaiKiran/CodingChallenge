//O(M*N*log(N*M)) solution 2
//returns no. of eles <= mid
int counteles(vector<int> arr, int mid){
    int l=0, h = arr.size()-1;
    while(l <= h){
        int m = (l+h)/2;
        if(arr[m] <= mid){
            l = m+1;
        }
        else{
            h = m-1;
        }
    }
    //after termination, l(0-based index) is answer
    return l;
}

int median(vector<vector<int>> &matrix, int m, int n){
    int low = 1, high = 1e9;
    while(low <= high){
        int mid = (low + high)/2;
        int count = 0;
        for(int i=0; i<m; i++){
            count += counteles(matrix[i], mid);
        }
        if(count <= ((m*n)/2)){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    //after termination, high will be the answer
    return low;
}


//O(M*N) solution 1
int median(vector<vector<int>> &matrix, int m, int n) {
    vector<int> v(m*n);
    int k = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            v[k++] = matrix[i][j];
        }
    }
    sort(v.begin(), v.end());
    return v[(m*n)/2];
}