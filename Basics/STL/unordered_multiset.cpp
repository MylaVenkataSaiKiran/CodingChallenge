#include<unordered_set>
#include<iostream>

using namespace std;

int main(){
    unordered_multiset<int> s;
    for(int i=1;i<=20;i++){
        s.insert(i);
    }
    s.insert(3);
    s.insert(4);
    s.insert(4);

    cout<<"The elements in the container are: "<<endl;
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"Count of 4 is "<<s.count(4)<<endl;

    cout<<"size of container before removing 4 is "<<s.size()<<endl;
    auto it = s.find(4);
    s.erase(it);
    cout<<"size of container after removing 4 is "<<s.size()<<endl;

    s.clear();
    cout<<"deleted all elements"<<endl;
    if(s.empty()) cout<<"the container is empty";

    return 0;
}
