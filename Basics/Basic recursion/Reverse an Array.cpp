void recurfunc(int i, int n, vector<int> &nums){
    if(i<n/2){
        swap(nums[i],nums[n-1-i]);
        recurfunc(i+1, n, nums);
    }
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    recurfunc(0,n,nums);
    return nums;
}
