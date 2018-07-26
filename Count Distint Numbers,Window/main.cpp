#include <iostream>
#include<set>
#include<map>
using namespace std;

//void countDistinct(int *a, int n, int k) {
//    set<int> saviour;
//    for(int i=0;i<k;i++){
//        saviour.insert(a[i]);
//    }
//    cout<<saviour.size()<<endl;
//    int starter = 0;
//    set<int>::iterator it;
//    for(int i=k+1;i<n;i++){
//        saviour.insert(a[i]);
////        saviour.erase(a[starter]);
//        starter++;
//        cout<<saviour.size()<<endl;
//    }
//}

void countDistinct(int *a, int n, int k){
    map<int,int> mappy;
    int counter= 0;
    for(int i=0;i<k;i++){
        mappy[a[i]]++;
        if(mappy[a[i]]==1){
            counter++;
        }
    }
    cout<<counter<<endl;

    int starter = 0;
    for(int i=k;i<n;i++){
        if(mappy[a[starter]]>1){
            mappy[a[starter]]--;
        }
        else{
            counter--;
            mappy[a[starter]]--;
        }

        mappy[a[i]]++;
        if(mappy[a[i]]==1){
            counter++;
        }

        starter++;
        cout<<counter<<endl;
    }




}


int main() {
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;
    countDistinct(a,n,k);


}