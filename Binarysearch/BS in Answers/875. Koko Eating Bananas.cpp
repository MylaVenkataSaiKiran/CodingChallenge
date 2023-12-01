class Solution {
public:

    long long checkhours(vector<int> piles, int mid){ 
        long long hours = 0;
        for(int i=0; i<piles.size(); i++){
            int hourtoeat = ceil(piles[i]/(double)mid);
            hours += hourtoeat;
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low=1, high= *max_element(piles.begin(), piles.end());
        int ans = -1;

        while(low<=high){
            int mid = (low+high)/2;
            long long m = checkhours(piles, mid);
            if(m <= h){ //can still have lesser number for K
                ans = mid;
                high = mid-1;
            }
            else{ // so, we need to takes a greater K to decrease no of hours
                low = mid+1;
            }
        }

        return ans;
    }
};