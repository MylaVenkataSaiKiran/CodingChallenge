int findKRotation(vector<int> &arr){
    int l=0, h=arr.size()-1, mid;
    int minele=1e9+1, index;

    while(l<=h){
        mid = (l+h)/2;
        if(arr[l]<=arr[h]){
            if(minele > arr[l]){
                minele = arr[l];
                index = l;
            }
        }

        if(arr[l]<=arr[mid]){
            if(minele > arr[l]){
                minele = arr[l];
                index = l;
            }
            l = mid+1;           
        }
        else{
            if(minele > arr[mid]){
                minele = arr[mid];
                index = mid;
            }
            h = mid-1;
        }
    }  
    return index;
}