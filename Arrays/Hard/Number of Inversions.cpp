
// OPTIMAL Solution O(NlogN)
void merge(vector<int>&a, int l, int mid, int h, int &count){
    int i=l, j=mid+1, k=0;
    int c[h-l+1];
    while(i<=mid && j<=h){
        if(a[i]>a[j]){
            count += (mid-i+1);
            c[k++] = a[j++];
        }
        else{
            c[k++] = a[i++];
        }
    }
    for(;i<=mid;i++){
        c[k++] = a[i];
    }
    for(;j<=h;j++){
        c[k++] = a[j];
    }

    for(int k=0;k<=h-l;k++){
        a[l+k] = c[k];
    }
}

void mergesort(vector<int>&a, int l, int h, int &count){
    if(l<h){
        int mid = (l+h)/2;
        mergesort(a,l,mid,count);
        mergesort(a,mid+1,h,count);
        merge(a,l,mid,h,count);
    }
}

int numberOfInversions(vector<int>& a,int n){
    int count = 0;
    mergesort(a,0,n-1,count);
    return count;
}

// naive
int numberOfInversions(vector<int>&a, int n) {
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) count++;
        }
    }
    return count;
}