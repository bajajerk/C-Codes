#include <iostream>
#include<queue>
using namespace std;


void kSortArray(int a[],int n ,int k){
    priority_queue<int> p;
    p.push(a[0]);
    for(int i=1;i<=k-1 ;i++){
        p.push(a[i]);
    }

    for(int i=0;i<n;i++){
        a[i] = p.top();
        p.pop();
        if(i+k<n) {
            p.push(a[i + k]);
        }
    }

}

int main() {
//    std::cout << "Hello, World!" << std::endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    kSortArray(a,n,3);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

    return 0;

}