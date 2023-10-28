//USING RECURSION
void recurfunc(int arr[], int n, int i){
    if(i==n) return;
    int j=i-1;
    int temp = arr[i];
    while(arr[j] > temp){
        arr[j+1]  = arr[j];
        j--; 
    }
    arr[j+1] = temp;
    recurfunc(arr, n, i+1);
}

void insertionSort(int arr[], int n){
    recurfunc(arr, n, 1);
}