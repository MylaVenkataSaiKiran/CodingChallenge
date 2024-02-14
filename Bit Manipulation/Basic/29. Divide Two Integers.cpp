class Solution {
public:
    int divfunc(long int dividend, long int divisor){
        int ans = 0;
        while(dividend - divisor >= 0){
            long int t_div = divisor, count = 1;
            while(t_div <= dividend - t_div){
                t_div << 1;
                count << 1;
            }
            ans += count;
            dividend -= t_div;
        }
        return ans;
    }

    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN){
            if(divisor == -1) return INT_MAX;
            if(divisor == 1) return INT_MIN;
        }
        int x = divfunc(abs(dividend), abs(divisor));
        return ((dividend<0 && divisor>0 || dividend>0 && divisor<0) ? -x : x);
    }
};