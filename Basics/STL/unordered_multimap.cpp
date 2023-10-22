#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    unordered_multimap<int,int> m;
    for(int i=1;i<=10;i++){
        m.insert({i,i*10});
    }
    m.insert({2,20});
    m.insert({2,20});
    m.insert({2,30});
    m.insert({2,110});

    cout<<"elements in the container are:"<<endl;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<"the size of container is "<<m.size()<<endl;
    auto it = m.find(2);
    m.erase(it);
    
    cout<<"elements after removing key=2 are"<<endl;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"the size of container is "<<m.size()<<endl;

    m.clear();
    cout<<"deleted all elements"<<endl;
    if(m.empty()) cout<<"container is empty!!";



    return 0;
}