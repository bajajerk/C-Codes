#include <iostream>
#include<vector>
using namespace std;
vector< vector<int> > ans;

void helper(int a[],int n,int sum, vector<int> uptillNow){
    if(sum==0){
        ans.push_back(uptillNow);
        return;
    }
    if(n==0 || sum<0){
        return;
    }
    helper(a+1,n-1,sum,uptillNow);

    uptillNow.push_back(a[0]);
    helper(a,n,sum-a[0],uptillNow);
}

vector<vector<int> > combinationSum(vector<int>& ar, int sum){
    int n = ar.size();
    int a[n];
    for(int i=0;i<n;i++){
        a[i] = ar[i];
    }
    sort(a,a+n);
    vector<int> uptill;
    helper(a,n,sum,uptill);
    return ans;
}


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    vector<int> uptill;
    helper(a,n,16,uptill);
    cout<<ans.size();
//    cout<<ans[0][;
    vector<int> t = ans[0];
    for(int i=0;i<t.size(); i++){
        cout<<endl<<t[i];
    }
//    for(int i=0;i<ans.size();i++){
//        for()
//    }
}
