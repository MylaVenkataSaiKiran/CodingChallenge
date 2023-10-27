void bubbleSort(vector<int> &arr, int n) 
{
    bool flag;
    for(int i=0; i<n-1; i++){
        flag = false;
        for(int j=0;j < n-i-1;j++){ //run from 0 to n-i-1 as i elems are already sorted
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(flag==false) break; //implies all arr is sorted
    }
}