class Solution {
public:
    string largestOddNumber(string num) {

        //iterate from back, if odd int then return else remove last num(even num)
        for(int i=num.size()-1; i>=0; i--){
            int val = num[i]-'0'; //to convert char to int
            if(val%2) return num;
            num.erase(i,1);
        }
        return num;
    }
};