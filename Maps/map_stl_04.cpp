#include <iostream>
#include<map>
#include<cstring>
#include<list>
using namespace std;

int main() {
    
    map<string, list<pair<string,int> > >  citymap;

    int E;
    cin>>E;
    for(int i=0;i<E;i++){
        string src,dest;
        int dist;
        cin>>src>>dest>>dist;
        citymap[src].push_back(make_pair(dest,dist));
        citymap[dest].push_back(make_pair(src,dist));
    }

    //Iterate over this
    for(auto p:citymap){
        cout<<p.first<<"->";
        for(auto dd:p.second){
            cout<<"("<<dd.first<<","<<dd.second<<")"<<",";
        }
        cout<<endl;
    }


   return 0;
}
