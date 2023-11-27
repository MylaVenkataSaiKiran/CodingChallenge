class Solution {
public:
    
    //OPTIMAL SOLUTION O(N)
    string frequencySort(string s){
        unordered_map<char, int> freq;
        vector<string> v(s.size()+1, "");

        //frequency of each character
        for(auto c:s){ 
            freq[c]++;
        }

        //store chars based on freq as index for vector
        for(auto it:freq){
            int i = it.second;
            char c = it.first;
            v[i].append(i, c); //appends char c, i times to string v[i]
        }

        //larger indexes have high freq chars
        string ans;
        for(int i=s.size(); i>0; i--){
            cout<<v[i]<<endl;
            if(!v[i].empty()){
                ans.append(v[i]);
            }
        }

        return ans;
    }


    //O(NlogN) - solution
    static bool sortby_second(pair<char,int> a,pair<char,int> b){
        return (a.second > b.second); //descending order
    }

    string frequencySort(string s) {
        unordered_map<char, int> m;
        vector<pair<char, int>> v;

        for(auto i:s){ //mappind char to value
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