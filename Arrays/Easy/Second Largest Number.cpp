
//O(N)-time complexity and O(1)-space complexity
vector<int> getSecondOrderElements(int n, vector<int> a){
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for(auto i:a){ //for largest and smallest
        max1 = max(max1, i);
        min1 = min(min1, i);
    }

    for(auto i:a){ //for second largest and smallest
        if(i!=min1){
            min2 = min(min2, i);
        }

        if(i!=max1){
            max2 = max(max2, i);
        }
    }

    return {max2, min2};
}


// O(N*logN)-time complexity and O(1)-time complexity
// vector<int> getSecondOrderElements(int n, vector<int> a) {
//     sort(a.begin(), a.end());
//     return{a[n-2], a[1]};
// }
