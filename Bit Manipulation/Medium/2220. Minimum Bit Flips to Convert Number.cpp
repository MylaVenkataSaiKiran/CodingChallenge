class Solution {
public:
    int minBitFlips(int start, int goal) {
        //find no. of set bits in XOR which is no. of different bits
        int ans = start^goal;
        return __builtin_popcount(ans);
    }
};