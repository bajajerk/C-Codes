#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int spanOfStock[n];
    int maxxUptillNow = a[0];
    spanOfStock[0] = 1;
    for(int i=1;i<n;i++){
        if(a[i]>maxxUptillNow){
            spanOfStock[i] = i+1;
            maxxUptillNow = a[i];
        }
        else{
            if(a[i-1]>=a[i]){
                spanOfStock[i] = 1;
            }
            else{
                    int temp = 0;
                    int j=i-1;
                    while(a[j]<a[i] && j>=0){
                        temp++;
                        j--;
                    }
                    spanOfStock[i]  = temp+1;
            }
        }
    }


    for(int i=0;i<n;i++){
        cout<<spanOfStock[i]<<" ";
    }
    return 0;
}