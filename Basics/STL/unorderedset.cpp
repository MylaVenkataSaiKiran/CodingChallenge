#include <unordered_set>
#include <iostream>

using namespace std;

int main(){
    unordered_set<int> s;
    for(int i=0;i<10;i++){
        s.insert(i);
    }

    cout<<s.size()<<" elements present in the unordered set are:"<<endl;
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"It is "<<s.count(2)<<" that 2 is present in the container"<<endl;

    auto it=s.find(2);
    s.erase(it);
    cout<<"elements after erasing 2 are:"<<endl;
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    cout<<"the size of the container is "<<s.size()<<endl;
    s.clear();
    if(s.empty()==true) cout<<"container is empty!!";
    else cout << "container is not empty";
    return 0;
}