#include <iostream>
#include<queue>
#include<vector>
using namespace std;

vector<int> kLargest(int a[], int n, int k){
    priority_queue<int, vector<int>, greater<int> > p;

    for(int i=0;i<k;i++){
        p.push(a[i]);
    }

    for(int i=k;i<n;i++){
//        cout<<p.top() <<"   "<<a[i]<<endl;
        if(p.top() < a[i]){
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
    std::cout << "Hello, World!" << std::endl;
    return 0;
}