#include <iostream>
#include<vector>
using namespace std;

int main() {
    int tests;
    cin>>tests;
    for(int t=0;t<tests;t++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max = -999;
        vector<int> v;
        int ans = 0;
        for(int i=n-1;i>=0;i--){
            if(a[i]>max){
                max = a[i];
                ans++;
                v.push_back(a[i]);
            }
        }
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]<< " ";
        }
        cout<<endl;
    }

    return 0;
}