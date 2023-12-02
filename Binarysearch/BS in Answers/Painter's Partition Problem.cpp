int canwepartition(vector<int> boards, int k, int mid){
    int painters = 1, time = 0;
    for(int i=0; i<boards.size(); i++){
        if(time + boards[i] > mid){
            painters++;
            time = boards[i];
        }
        else{
            time += boards[i];
        }
    }

    return painters;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);
    int ans = high;

    while(low <= high){
        int mid = (low + high)/2; //represents maxtime
        int painters = canwepartition(boards, k, mid);
        if(painters <= k){ //we can decrease maxtime
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}