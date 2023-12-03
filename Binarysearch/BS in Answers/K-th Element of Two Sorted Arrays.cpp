
//Optimal solution : O(log(min(n,m)))
int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
    if(n > m) return kthElement(arr2, arr1, m, n, k);
    int low = max(0, k-m);//consider k > m, we need to pick atleast k-m elems from arr1 hence low!=0
    int high = min(k, n);//consider k<n, we need to take only k elems

    while(low <= high){
        int cut1 = (low + high)/2; //it to decide num of elems to pick
        int cut2 = k - cut1;

        int leftmax1 = cut1==0 ? -1 : arr1[cut1-1];
        int leftmax2 = cut2==0 ? -1 : arr2[cut2-1];

        int rightmin1 = cut1==n ? 1e9+1 : arr1[cut1];
        int rightmin2 = cut2==m ? 1e9+1 : arr2[cut2];

        if(leftmax1 <= rightmin2 && leftmax2 <= rightmin1){
            return max(leftmax1, leftmax2);
        }
        else if(leftmax1 > rightmin2){
            high = cut1 - 1;
        }
        else{
            low = cut1 + 1;
        }
    }
    return -1;
}

//solution 1: O(N+M)
int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int l){
    int i=0, j=0, k=0;
    vector<int> v(n+m);

    while(i<n && j<m){
        if(arr1[i] <= arr2[j]){
            v[k++] = arr1[i++];
        }
        else if(arr1[i] > arr2[j]){
            v[k++] = arr2[j++];
        }
        if(k==l){
            return v[l-1];
        }
    }
    for(; i<n; i++){
        v[k++] = arr1[i];
    }
    for(; j<m; j++){
        v[k++] = arr2[j];
    }

    return v[l-1];
}