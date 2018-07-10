#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int r=0;r<t;r++){
        int n;
        cin>>n;
        int a[n];
        int superElement;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> starElements;
        int maxxy=INT_MIN;
        int initial = a[n-1];
        for(int i=n-1;i>=0;i--){
            if(a[i]>maxxy){
                maxxy = a[i];
                superElement = maxxy;
                starElements.push_back(a[i]);
            }
            if(supe)
        }
        for(int i=starElements.size()-1;i>=0;i--){
            cout<<starElements[i]<<" ";
        }
        cout<<endl;
        cout<<starElements[starElements.size()-1];
        cout<<endl;
    }

    return 0;
}