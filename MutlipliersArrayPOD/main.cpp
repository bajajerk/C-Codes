#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(a[j]%a[i]==0){
                count++;
            }
        }
        cout<<count<<" ";
    }
}