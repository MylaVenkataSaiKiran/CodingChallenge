class Solution {
public:
    //solution 2: O(log(m+n))
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()) return findMedianSortedArrays(nums2, nums1);
        int m = nums1.size(), n = nums2.size();

        int low = 0, high = m;
        while(low <= high){
            int cut1 = (low + high)>>1;
            int cut2 = (m+n+1)/2 - cut1; //suitable for even length as well

            int leftmax1 = cut1==0 ? INT_MIN : nums1[cut1-1];
            int leftmax2 = cut2==0 ? INT_MIN : nums2[cut2-1];

            int rightmin1 = cut1==m ? INT_MAX : nums1[cut1];
            int rightmin2 = cut2==n ? INT_MAX : nums2[cut2];

            if(leftmax1 <= rightmin2 && leftmax2 <= rightmin1){
                if((n+m)%2==0){
                    return (max(leftmax1, leftmax2) + min(rightmin1, rightmin2))/2.0;
                }
                else{
                    return max(leftmax1, leftmax2);
                }
            }
            else if(leftmax1 > rightmin2){
                high = cut1 - 1;
            }
            else{
                low = cut1 + 1;
            }
        }
        return -1;
    }

    //solution 1 : O(m+n)
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        int i=0, j=0, k=0;
        vector<int> v(m+n);
        while(i<m && j<n){
            if(nums1[i] <= nums2[j]){
                v[k++] = nums1[i++];
            }
            else if(nums1[i] > nums2[j]){
                v[k++] = nums2[j++];
            }
        }
        for(; i<m; i++){
            v[k++] = nums1[i];
        }
        for(; j<n; j++){
            v[k++] =  nums2[j];
        }

        int mid = (n+m)/2;
        double ans;
        if((n+m)%2==0){
            ans = (v[mid] + v[mid-1])/2.0;
        }
        else{
            ans = v[mid];
        }
        return ans;
    }
};