class Solution {
public:
    //naive solution Time-O(N^2) Space O(1)
    long long subArrayRanges(vector<int>& nums) {
        long long int ans = 0;
        for(int i=0; i<nums.size()-1; i++){
            int maxele = nums[i], minele = nums[i];
            for(int j=i+1; j<nums.size(); j++){
                maxele = max(maxele, nums[j]);
                minele = min(minele, nums[j]);
                ans += (maxele - minele);
            }
        }

        return ans;
    }

    //time - O(N) Space O(N)
    long long subArrayRanges(vector<int>& nums){
        long long int ans = 0;
        int n = nums.size();
        stack<int> s;
        vector<int> minprev(n,-1), minnext(n,n), maxprev(n,-1), maxnext(n,n);

        //min
        for(int i=0; i<n; i++){
            while(!s.empty() && (nums[i]<=nums[s.top()])) s.pop();

            if(!s.empty()) minprev[i] = s.top();
            s.push(i);
        }
        while(!s.empty()) s.pop(); //empty stack
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && (nums[i]<nums[s.top()])) s.pop();

            if(!s.empty()) minnext[i] = s.top();
            s.push(i);
        }

        //max
        for(int i=0; i<n; i++){
            while(!s.empty() && (nums[i]>=nums[s.top()])) s.pop();

            if(!s.empty()) maxprev[i] = s.top();
            s.push(i);
        }
        while(!s.empty()) s.pop();//emmpty stack
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && (nums[i]>nums[s.top()])) s.pop();

            if(!s.empty()) maxnext[i] = s.top();
            s.push(i);
        }

        for(int i=0; i<n; i++){
            long long int leftmin = i-minprev[i], leftmax = i-maxprev[i];
            long long int rightmin = minnext[i]-i, rightmax = maxnext[i]-i;
            ans += (leftmax*rightmax - leftmin*rightmin)*nums[i];
        }

        return ans;
    }
};