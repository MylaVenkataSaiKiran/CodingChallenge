#include<set>
#include<iostream>

using namespace std;

int main(){
    set<int> s;
    for(int i=10;i>0;i--){
        s.insert(i);
    }

    cout<<"the elements in the set are "<<endl;
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl<<"We can observe that the elements are sorted in increasing order"<<endl;

    if(s.count(4)) cout<<"4 is present in the set"<<endl;

    auto it = s.find(4);
    s.erase(it);
    cout<<"after removing 4 from the set the size of set is "<<s.size()<<endl;

    s.insert(87);
    s.insert(11);
    s.insert(1);
    s.insert(1);

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it <<" ";
    }
    s.clear();
    cout<<"deleted all elements"<<endl;
    if(!s.empty()) cout<<"set is not empty";
    else cout<<"set is empty";

    return 0;
}