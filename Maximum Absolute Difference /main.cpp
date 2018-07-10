#include <iostream>
#include<vector>
using namespace std;

int maxArr(vector<int> &a) {

    int maxxy = -9999;
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
//            cout<<"hi";
            int temp = abs(a[i]-a[j]) + abs(i-j);
            maxxy = max(maxxy,temp);

        }
    }
    return maxxy;
}


int main() {
    int n;
    cin>>n;
    vector<int> m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        m.push_back(a);
    }
    cout<<maxArr(m);
}