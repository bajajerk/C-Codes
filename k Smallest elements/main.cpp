#include <iostream>
#include<vector>
#include<queue>
using namespace std;


vector<int> kSmallest(int *a, int n, int k) {
    priority_queue<int> p;

    for(int i=0;i<k;i++){
        p.push(a[i]);
    }

    for(int i=k;i<n;i++){
//        cout<<p.top() <<"   "<<a[i]<<endl;
        if(p.top() > a[i]){
            p.pop();
            p.push(a[i]);
        }
    }
    vector<int> ans;
    while(!p.empty()){
        ans.push_back(p.top());
        p.pop();
    }
    return ans;

}



int main() {

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;

    vector<int> ans  = kSmallest(a,n,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}