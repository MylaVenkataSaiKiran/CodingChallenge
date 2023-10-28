//USING RECURSION
void bubbleSort(vector<int> &arr, int n){
    if(n==1) return;
    int j=0;
    while(j<n-1){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        j++;
    }
    bubbleSort(arr, n-1);
}