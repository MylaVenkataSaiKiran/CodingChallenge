class Solution {
public:
    int addDigits(int num) {
        if((num/10)==0) return num; //if single digit

        int temp = num, digits = 0, sum=0;

        while(temp > 0){ //count num of digits
            digits++;
            temp /= 10;
        }

        for(int i=0;i<digits;i++){
            int div = pow(10,digits-i-1);
            sum += (num/div); //sum of digits
            num = num%div;
        }
        int ans = addDigits(sum); //returns single digit
        return ans;
    }
};