#include <iostream>
#include<vector>
#include<stack>
using namespace std;

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {

    int h1Weight = 0;
    int h2Weight = 0;
    int h3Weight  = 0;

    for(int i=0;i<h1.size();i++){
        h1Weight+=h1[i];
    }
    for(int i=0;i<h2.size();i++){
        h2Weight+=h2[i];
    }
    for(int i=0;i<h3.size();i++){
        h3Weight+=h3[i];
    }
    int top1=0, top2=0, top3=0;
    while(true){
        if(h1Weight==0 && h2Weight==0 && h3Weight==0){
            return 0;
        }
        else if(h1Weight==h2Weight && h2Weight==h3Weight){
            return h1Weight;
        }

        else if(h1Weight>= h2Weight && h1Weight>=h3Weight){
            h1Weight -=h1[top1];
            top1++;
        }

        else if(h2Weight>= h3Weight && h2Weight>=h3Weight){
            h2Weight -=h2[top2];
            top2++;
        }
        else if(h3Weight>= h2Weight && h3Weight>=h1Weight){
            h3Weight -=h3[top3];
            top3++;
        }
    }

}

int main() {
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    for(int i=0;i<n1;i++){
        int m;
        cin>>m;
        v1.push_back(m);
    }
    for(int i=0;i<n2;i++){
        int m;
        cin>>m;
        v2.push_back(m);
    }
    for(int i=0;i<n3;i++){
        int m;
        cin>>m;
        v3.push_back(m);
    }
    cout<<equalStacks(v1,v2,v3);

    return 0;
}