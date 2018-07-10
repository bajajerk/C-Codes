#include <iostream>
#include<math.h>
#include <algorithm>    // std::swap

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int j = i-1;
        int itty = i;
        while(j>=0){
            if(a[j]>a[itty]){
                swap(a[j],a[itty]);
            }
            j--;
            itty--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }

}