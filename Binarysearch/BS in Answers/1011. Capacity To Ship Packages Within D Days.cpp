class Solution {
public:
    //returns num of days for weight capacity=mid
    int checkdays(vector<int> weights, int mid){ 
        int sum = 0, d = 0;
        for(auto i:weights){
            sum += i;
            if(sum == mid){
                d++;
                sum = 0;
            }
            else if(sum > mid){
                d++;
                sum = i;
            }
        }
        if(sum < mid && sum!=0){ //for last sum within weight capacity
            d++;
        }
        return d;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = high;

        while(low <= high){
            int mid = (low+high)/2; //mid represents weight capacity

            int d = checkdays(weights, mid);
            if(d <= days){ //days are in range, so search for least weight
                ans = mid;
                high = mid-1;
            }
            else{ //weight capacity is less and should be increased
                low = mid+1;
            }
        }
        return ans;
    }
};