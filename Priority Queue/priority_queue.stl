#include <iostream>
#include <queue>
using namespace std;

int main(){ 
    priority<int> pq_max; //max priority queue
    priority_queue<int,vector<int>, greater<int> >  pq; //min priority queue

    int n;
    cin>>n;

    for(int i=1;i<n;i++){
        int no;
        cin>>no;
        pq.push(no); //O(LogN)
    }

    //Remove the elements from the heap
    while(!pq.empty()){
        cout<< pq.top()<<" ";
        pq.pop();
    }
    return 0;
}