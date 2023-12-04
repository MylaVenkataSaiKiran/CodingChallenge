
//Solution 2: O(N*logM)
int lowerbound(vector<int> arr, int m){
    int low = 0, high = m-1, count1s=0;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= 1){
            count1s = (m-mid); //gives no. of 1s in colmn
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return count1s;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m){
    int maxcnt = 0, index = -1;
    for(int i=0; i<n; i++){
        int count1s = lowerbound(matrix[i], m);
        if(count1s > maxcnt){
            maxcnt = count1s;
            index = i;
        }
    }
    return index;
}

//solution 1: O(N*logM)
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int low = 0, high = m-1; //for horizontal index
    int ans = -1;

    while(low <= high){
        int mid = (low + high)/2;
        int flag = 0;
        for(int i=0; i<n; i++){
            if(matrix[i][mid]==1){
                ans = i;
                high = mid-1;
                flag = 1;
                break;
            }
        }
        if(flag==0) low = mid+1;
    }
    return ans;
}