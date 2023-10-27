void insertionSort(int arr[], int n)
{
    int temp;
    int j;
    for(int i=1;i<n;i++){
        j=i-1;
        temp = arr[i];
        while(arr[j]>temp){ //as long as left ele is larger
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp; //j is decreased by 1 for one extra time.
    }
}