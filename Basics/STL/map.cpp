#include<map>
#include<iostream>

using namespace std;

int main(){
    map<int,int> m;
    for(int i=10;i>0;i--){
        m.insert(make_pair(i,i*100));
    }

    cout<<"elements in the map are:"<<endl;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    if(m.count(2)) cout<<endl<<"2 as key is present in map"<<endl;

    auto it = m.find(10);
    if(it!=m.end()) m.erase(it);
    cout<<"removed element with key =2 and the size is now "<<m.size()<<endl;

    m.clear();
    cout<<"deleted all elements"<<endl;
    if(m.empty()) cout<<"map is empty";
    return 0;
}