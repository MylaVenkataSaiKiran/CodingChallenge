void selectionSort(vector<int>&arr) {
    for(int i=0;i<arr.size()-1;i++){
        auto it = min_element(arr.begin()+i+1,arr.end()); //find min elem from n-i right elems
        if(arr[i] > *it){
            swap(arr[i], *it);
        }
    }
}