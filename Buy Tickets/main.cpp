#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int buyTicket (int *arr, int n, int k){
    queue<int> q;
    priority_queue<int> pq;

    for(int i=0;i<n;i++){
        q.push(arr[i]);
        pq.push(arr[i]);
    }

    int indexer = k;
    int count = 0;
    while(indexer>=0){
//        cout<<indexer<<endl;
        int frontMe = q.front();
        int topOfPQ = pq.top();
        if(topOfPQ>frontMe){
            q.pop();
            q.push(frontMe);
            if(indexer==0){
//                cout<<"come";
                indexer = q.size()-1;
            }
            else{
                indexer--;
            }
        }
        else{
            q.pop();
            indexer--;
            pq.pop();
            count++;
        }
    }
    return count;

}


int main() {
    int n;
    cin>>n;
    int * arr=  new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<buyTicket(arr,n,k);
}