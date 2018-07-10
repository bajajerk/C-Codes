#include <iostream>
#include<vector>
using namespace std;

int trap(const vector<int> &a) {
   int n = a.size();
    int leftMax[a.size()];
    int rightMax[a.size()];
    int leftmaxxy = a[0];
    leftMax[0] = leftmaxxy;
    cout<<a[0]<<endl;
    for(int i=1;i<n;i++){
        leftmaxxy = max(leftmaxxy,a[i]);
        leftMax[i] = leftmaxxy;
        cout<<i<<" "<<leftMax[i]<<endl;
    }
//    for(int i=0;i<n;i++){
//        cout<<leftMax[i]<<" ";
//    }
    cout<<endl;

    int right = a[n-1];
    rightMax[n-1] = right;
    cout<<"right "<<right<<endl;
    for(int i=n-2;i>=0;i--){
        right = max(right,a[i]);
        rightMax[i] = right;
    }


    int ans = 0;
    for(int i=0;i<n;i++){
        int temp = min(leftMax[i],rightMax[i])-a[i];
        cout<<temp<<endl;
        ans+=temp;
    }
    return ans;

}

int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<trap(v);
    return 0;
}