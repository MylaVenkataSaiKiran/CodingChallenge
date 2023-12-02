
bool canweallocate(vector<int> arr, int m, int mid){
    int numStudents=1, sumPages=arr[0];
    for(int i=1; i<arr.size(); i++){
        if(sumPages + arr[i] > mid){ //continuous allocation failed
            numStudents++;
            sumPages = arr[i];
        }
        else{
            sumPages += arr[i];
        }
    }

    if(numStudents <= m){//we can decrease max pages allocated and so students increases
        return true;
    }
    return false;//maxpages is too less that, it should be increased and so numstudents decreases
}

int findPages(vector<int>& arr, int n, int m) {
    if(n < m){//no of books are less than no of students
        return -1;
    }

    int low = *max_element(arr.begin(), arr.end());//occurs if n==m
    int high = accumulate(arr.begin(), arr.end(), 0); //occurs if m=1
    int ans = high;

    while(low <= high){
        int mid = (low+high)/2; //max pages allocated in an allocation set
        if(canweallocate(arr, m, mid)){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}