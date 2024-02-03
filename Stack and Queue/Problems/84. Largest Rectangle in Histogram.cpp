class Solution {
public:
    //Naive O(N^2)
    int largestRectangleArea(vector<int>& heights) {
        int maxrect = INT_MIN;
        for(int i=0; i<heights.size(); i++){
            int newmax = 0;
            int minheight = heights[i];
            for(int j=i; j<heights.size(); j++){
                minheight = min(minheight, heights[j]);
                newmax = max(newmax, minheight*(j-i+1));
            }
            maxrect = max(maxrect, newmax);
        }

        return maxrect;
    }

    //Using stack Time O(N) space O(N)
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> s;
        vector<int> leftmin(n, -1), rightmin(n, n);
        //next smaller elem on left
        for(int i=0; i<heights.size(); i++){
            while(!s.empty() && heights[i] <= heights[s.top()]) s.pop();

            if(!s.empty()) leftmin[i] = s.top()+1;
            else leftmin[i] = 0;

            s.push(i);
        }

        while(!s.empty()) s.pop();

        //next smaller elem on right
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && heights[i] <= heights[s.top()]) s.pop();

            if(!s.empty()) rightmin[i] = s.top()-1;
            else rightmin[i] = n-1;

            s.push(i);
        }

        int ans = INT_MIN;
        for(int i=0; i<n; i++){
            ans = max(ans, (rightmin[i] - leftmin[i] + 1)*heights[i]);
        }

        return ans;
    }
};