class Solution {
public:
    //optimal sol
    void rotate(vector<int>& nums, int k){
        int n = nums.size();
        k = k%n;
        //right shift by k places
        reverse(nums.begin(), nums.begin()+(n-k));
        reverse(nums.begin()+(n-k), nums.end());
        reverse(nums.begin(), nums.end());
        //left shift by k places
        // reverse(arr.begin(), arr.begin()+k);
        // reverse(arr.begin()+k, arr.end());
        // reverse(arr.begin(), arr.end());
    }

    //other solution
    // void rotate(vector<int>& nums, int k) {
    //     if(k==0) return;
    //     vector<int> temp(nums);
    //     nums.clear();
    //     int n = temp.size();
    //     if(k>n) k = k%n;
    //     for(int i=0;i<n;i++){
    //         nums.push_back(temp[(i+(n-k))%n]);
    //     }
    // }
};