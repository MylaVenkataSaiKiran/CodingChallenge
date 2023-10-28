void merge(vector<int>& arr,int l,int mid, int r){
    int i=l, j=mid+1;
    int b[r-l+1];
    int k=0;
    while(i<=mid && j<=r){
        if(arr[i]>arr[j]){
            b[k++]=arr[j++];
        }
        else{
            b[k++]=arr[i++];
        }
    }
    for(;j<=r;j++){ //for coping remaining elems in right array
        b[k++]=arr[j];
    }
    for(;i<=mid;i++){ //for coping remaining elems in left array
        b[k++]=arr[i];
    }

    int m = r-l;
    while(m>=0){
        arr[l+m]=b[m];
        m--;
    }
}


void mergeSort(vector<int>& arr, int l, int r) {
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}