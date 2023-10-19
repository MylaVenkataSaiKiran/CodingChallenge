class Solution {
public:
    int lastRemaining(int n) {
        int num_of_ele = n;
        int L2R = 1;
        int head = 1, step=1;
        while(num_of_ele > 1){ //run till remaining ele=1
            if(L2R==1){ //moving left to right: head moves right
                head += step; 
                L2R = 0;
            }
            else{ //moving from right to left
                if(num_of_ele%2) head += step; //head moves only for odd no. of ele
                L2R = 1;
            }
            //in each step stepsize increases by 2 and remaining elems decreases by 2
            step *= 2; 
            num_of_ele /= 2;
        }

        return head;
    }
};