class Solution {
public:

    //OPTIMAL Solution using mergesort O(NlogN)
    void merge(vector<int>& nums, int l, int mid, int h, int &count){
        int i=l, j=mid+1, k=0;
        int c[h-l+1];

        int right = mid+1;
        for(int left=l; left<=mid; left++){ // to find count for each left ele
            while(right<=h && nums[left] > 2*(long)nums[right]){
                right++; //find all right elems for particular left elem
            }
            count += (right-mid-1); //no of r8 elems that satisfy above condn
        }

        //Original merge algorithm as it is...
        while(i<=mid && j<=h){ 
            if(nums[i] > nums[j]){
                c[k++] = nums[j++];
            }
            else{ 
                c[k++] = nums[i++];
            }
        }
        for(;i<=mid;i++){
            c[k++] = nums[i];
        }
        for(;j<=h;j++){
            c[k++] = nums[j];
        }

        for(int k=0;k<=h-l;k++){
            nums[l+k] = c[k];
        }
    }

    void mergesort(vector<int>& nums, int l, int h, int &count){
        if(l<h){
            int mid = (l+h)/2;
            mergesort(nums, l, mid, count);
            mergesort(nums, mid+1, h, count);
            merge(nums, l, mid, h, count);
        }
    }

    int reversePairs(vector<int>& nums) {
        int count=0;
        mergesort(nums, 0, nums.size()-1, count);
        return count;
    }
};