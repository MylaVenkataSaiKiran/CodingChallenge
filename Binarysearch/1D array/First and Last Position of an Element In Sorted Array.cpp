pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int l=0, h=n-1, mid;

    int first=-1, last=-1;
    //first occurence
    while(l<=h){
        mid = (l+h)/2;
        if(k==arr[mid]){
            first = mid;
            h = mid-1;
        }
        else if(k > arr[mid]){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }

    //last occurence
    l=0, h=n-1;
    while(l<=h){
        mid = (l+h)/2;
        if(k==arr[mid]){
            last = mid;
            l = mid+1;
        }
        else if(k > arr[mid]){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }

    return {first, last};
}
