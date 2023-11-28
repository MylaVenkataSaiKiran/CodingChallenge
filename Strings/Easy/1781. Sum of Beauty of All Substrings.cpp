class Solution {
public:
    int beautySum(string s) {
        vector<int> v(26,0); //for using as map

        int maxfreq, minfreq = INT_MAX, ans = 0;

        for(int i=0; i<s.size(); i++){ //starting char of substr
            maxfreq = INT_MIN;
            for(int j=i; j<s.size(); j++){ //increasing length of substr
                v[s[j]-'a']++;
                maxfreq = *max_element(v.begin(), v.end());
                for(auto i:v){
                    if(i > 0){ //it should be > 0, as there is aleast one char
                        minfreq = min(i, minfreq);
                    }
                }
                ans  += (maxfreq - minfreq);
                minfreq = INT_MAX; // minfreq may increase in next iteration
            }
            fill(v.begin(),v.end(),0); //reset the vector map
        }

        return ans;

    }
};