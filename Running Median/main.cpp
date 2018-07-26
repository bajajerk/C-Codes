#include <iostream>
#include<queue>
using namespace std;



void findMedian(int a[], int n){
    priority_queue<int> maxxy;
    priority_queue<int , vector<int> , greater <int> > minny;

    maxxy.push(a[0]);
    minny.push(a[0]);
    int mediator = a[0];
    cout<<mediator<<endl;

    for(int i=1;i<n;i++){
        if(mediator<a[i]){
            maxxy.push(a[i]);
        }
        else{
            minny.push(a[i]);
        }
    }




}


int main() {

}