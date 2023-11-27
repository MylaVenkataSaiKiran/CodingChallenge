class Solution {
public:
    //can do it using priority queue instead of vector
    static bool sortby_second(pair<char,int> a,pair<char,int> b){
        return (a.second > b.second); //descending order
    }

    string frequencySort(string s) {
        unordered_map<char, int> m;
        vector<pair<char, int>> v;

        for(auto i:s){ //mapping char to value
            m[i]++;
        }

        for(auto i:m){ //store in vector to later sort based on value(freq)
            v.push_back(make_pair(i.first, i.second));
        }

        sort(v.begin(), v.end(), sortby_second); //sort based on freq

        string ans = "";
        for(auto i:v){
            for(int j=0; j<i.second; j++){ //add char to ans based on freq
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};