#include<set>
#include<iostream>

using namespace std;

int main(){
    multiset<int> s;
    for(int i=20;i>0;i--){
        s.insert(i);
    }

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);

    s.insert(3);
    s.insert(3);

    cout<<"elements in the container are:"<<endl;
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"count of 5 is "<<s.count(5);
    auto it = s.find(5);
    s.erase(it);
    cout<<endl<<"removed 5"<<endl;
    cout<<"count of 5 now is "<<s.count(5)<<endl;

    s.clear();
    cout<<"deleted all elements";
    if(s.empty()) cout<<endl<<"multiset is empty";

    return 0;
}