class Solution {
public:
    
    long long int size = 1e9+7;
    int sumSubarrayMins(vector<int>& arr) {
        long long int sum=0;
        vector<int> left(arr.size(), -1);
        vector<int> right(arr.size(), arr.size());
        stack<int> s;

        //finding valid endpoint to left for each arr[i]
        for(int i=0; i<arr.size(); i++){
            while(!s.empty() && arr[i] < arr[s.top()]) s.pop();

            if(!s.empty()) left[i] = i - s.top();
            else left[i] = i+1;
            s.push(i);
        }

        while(!s.empty()) s.pop();

        //finding valid endpoint to right for each arr[i]
        for(int i=arr.size()-1; i>=0; i--){
            while(!s.empty() && arr[i] <= arr[s.top()]) s.pop();

            if(!s.empty()) right[i] = s.top()-i;
            else right[i] = arr.size()-i;
            s.push(i);
        }


        //calculating contribution of each elem (i.e arr[i])
        for(int i=0; i<arr.size(); i++){
            long long int prdt = (left[i]*right[i])%size;
            prdt = (prdt*arr[i])%size;
            sum = (sum+prdt)%size;
        }

        return sum%size;
    }
};