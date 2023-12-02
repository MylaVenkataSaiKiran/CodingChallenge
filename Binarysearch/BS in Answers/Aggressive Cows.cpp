bool canweplace(vector<int> stalls, int mid, int k){
    int laststall = stalls[0], count=1;
    for(int i=1; i<stalls.size(); i++){
        if(stalls[i]-laststall >= mid){ //dist is greater than mindist
            count++; //num of cows place
            laststall = stalls[i];
        }
    }

    if(count >= k){
        return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int low = 1, high = stalls.back(); //maxele
    int ans = high;
    while(low <= high){
        int mid = (low+high)/2;
        if(canweplace(stalls, mid, k)){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}