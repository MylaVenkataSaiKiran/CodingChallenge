class Solution {
public:

    //returns num of bouquets till Days=mid
    int checkBouquets(vector<int> bloomDay, long long int mid, int k){
        int bouquets = 0, count=0;
        for(int i=0; i<bloomDay.size(); i++){
            if(bloomDay[i] <= mid){ //that flower was bloomed
                count++;
            }
            else{
                count=0; //adjacency is broken, so count=0
            }

            if(count==k){ //k adjacent flowers
                bouquets++;
                count=0;
            }
        }
        return bouquets;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        //search space
        long long int low = *min_element(bloomDay.begin(), bloomDay.end());
        long long int high = *max_element(bloomDay.begin(), bloomDay.end());

        long long int ans = -1;
        while(low <= high){
            long long int mid = (low+high)/2; //mid represents days

            int bouquets = checkBouquets(bloomDay, mid, k);

            if(bouquets >= m){ //we can find lesser days than mid
                ans = mid;
                high = mid-1;
            }
            else{ //bouquets are less,so we need more days than mid
                low = mid+1;
            }
        }

        return ans;
    }
};