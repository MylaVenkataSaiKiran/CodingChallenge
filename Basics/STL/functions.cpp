#include<vector>
#include<iostream>
#include<numeric> //for using iota
#include<algorithm>

using namespace std;

void printvec(vector<int> v){
    cout<<"elements in vector are "<<endl;
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
}

void printvec(vector<pair<int,int>> v){
    cout<<"elements in vector are "<<endl;
    for(auto i:v) cout<<i.first<<" "<<i.second<<endl;
}

bool sortby_second(pair<int,int> a,pair<int,int> b){
    return (a.second < b.second);
}


int main(){
    vector<int> v(10);
    iota(v.begin(),v.end(),3);

    printvec(v);

    next_permutation(v.begin(),v.end());
    cout<<"next permutation"<<endl;
    printvec(v);

    auto it = max_element(v.begin(),v.end());
    cout<<"maximum element in the vector is "<<*it<<endl;

    it = min_element(v.begin(),v.end());
    cout<<"minimum element in the vector is "<<*it<<endl;

    sort(v.begin(),v.end());
    cout<<"sorted the vector in ascending order"<<endl;
    printvec(v);

    sort(v.begin(),v.end(),greater<int>());
    cout<<"sorted the vector in descending order"<<endl;
    printvec(v);

    cout<<"created a new vector"<<endl;
    vector<pair<int,int>> a;
    for(int i=1;i<5;i++){
        a.push_back(make_pair(i,i*10));
    }
    printvec(a);

    sort(a.begin(),a.end(),sortby_second);
    cout<<"sorted using custom comparator in the ascending order of second element"<<endl;
    printvec(a);


    return 0;
}