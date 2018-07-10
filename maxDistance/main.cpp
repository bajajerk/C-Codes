#include <iostream>
#include<vector>
#include <map>
using namespace std;

int maxDistance(vector<int> input){
    int maxxy = INT_MIN;
    map <int,int> mappy;
    for(int i=0;i<input.size();i++){
        if(mappy[input[i]]<=0){
            mappy[input[i]]= i +1;
        }
        else{
            int bacha = i-mappy[input[i]]+1;
//            cout<<"?";
            if(bacha>maxxy){
                maxxy = bacha;
            }
        }
    }
    return maxxy;
}



int main() {
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
//    int a[9]= {1,3,1,4,5,6,4,8,3};
    cout<<maxDistance(v);
    return 0;
}