#include <iostream>
#include<map>
using namespace std;

int CountExtraElements(int a[], int n) {
    map <int,int> mappy;
    for(int i=0;i<n;i++){
        mappy[a[i]]++;
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(mappy[a[i]]>1){
            count = count + mappy[a[i]] - 1;
        }
        mappy[a[i]] = 0;
    }
    return count;
}




int main() {
    int a[5] = {2,1,4,2,1};
    cout<<CountExtraElements(a,5);
    return 0;
}