#include <iostream>
using namespace std;
int kadaneMaxSumSubaaray(int a[],int n){
    int best = 0;
    int current = 0;
    for(int i=0;i<n;i++){
        current+=a[i];
        if(best<current){
            best = current;
        }
        if(current<0){
            current=0;
        }
    }
    return best;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<kadaneMaxSumSubaaray(a,n);
}