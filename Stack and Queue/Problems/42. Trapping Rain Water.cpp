class Solution {
public:
    // Naive solution Time-O(N^2) space-O(1)
    int trap(vector<int>& height) {
        int ans = 0;
        for(int i=0; i<height.size(); i++){
            int leftmax=0, rightmax=0;
            //determining left max
            for(int j=i; j>=0; j--){
                if(leftmax < height[j]) leftmax = height[j];
            }
            //determining right max
            for(int j=i; j<height.size(); j++){
                if(rightmax < height[j]) rightmax = height[j];
            }
            //count water quantity
            int water = min(leftmax, rightmax) - height[i];
            ans += water;
        }

        return ans;
    }

    Better solution time-O(N), space- O(N)
    int trap(vector<int>& height) {
        int ans = 0;
        vector<int> leftmax(height.size(), 0);
        vector<int> rightmax(height.size(),0);
        //determine leftmax for each elem
        leftmax[0] = height[0];
        for(int i=1; i<height.size(); i++){
            leftmax[i] = max(leftmax[i-1], height[i]);
        }
        //determine rightmax for each elem
        rightmax[height.size()-1] = height.back();
        for(int i=height.size()-2; i>=0; i--){
            rightmax[i] = max(rightmax[i+1], height[i]);
        }
        //determine quantity of water
        for(int i=0; i<height.size(); i++){
            ans += (min(leftmax[i], rightmax[i]) - height[i]);
        }

        return ans;
    }

    //Optimal solution time-O(N), space-O(N)
    int trap(vector<int>& height){
        int ans=0;
        int leftmax = 0, rightmax = 0;
        int l=0, r = height.size()-1;
        while(l<=r){
            if(height[l] <= height[r]){
                if(height[l] >= leftmax) leftmax = height[l];
                else ans += (leftmax - height[l]);
                l++;
            }
            else{
                if(height[r] >= rightmax) rightmax = height[r];
                else ans += (rightmax - height[r]);
                r--;
            }
        }

        return ans;
    }
};