#include <iostream>
#include<queue>
#include<vector>
using namespace std;

void solve(int n, vector<int> a){
    priority_queue<int, vector<int>, greater<int> > p;
    priority_queue<int, vector<int>, greater<int> > q;


    for(int i=0;i<=1;i++){
        p.push(a[i]);
        cout<<"-1"<<endl;
    }
    p.push(a[2]);


    for(int i=2;i<n;i++){
        if(i>2) {
            if (p.top() < a[i]) {
                p.pop();
                p.push(a[i]);
            }
        }

        long long pro =1 ;
        while(!p.empty()){
            pro= pro * p.top();
//            cout<<pro<<" ";

            q.push(p.top());
            p.pop();
        }
//        cout<<endl<<" now ans";

        cout<<pro<<endl;
        p = q;
        while(!q.empty()){
            q.pop();
        }
    }

}

int main() {
  int n;
  cin>>n;
//  int a[n];
    vector<int> a;
  for(int i=0;i<n;i++){
      int x;
      cin>>x;
      a.push_back(x);
  }
  solve(n,a);
}