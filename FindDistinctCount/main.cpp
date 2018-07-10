#include <iostream>
#include<algorithm>
#include<map>
using namespace std;

int FindDistinctCount(int a[], int n,int k) {
    sort(a,a+n);
    map<int,int> mappy;
    for(int i=0;i<n-k;i++){
        mappy[a[i]]++;
    }
    int count = 0;
    for(int i=0;i<n-k;i++){
        if(mappy[a[i]]>=1){
            count++;
            mappy[a[i]] = 0;
        }
    }
    return count;

}





int main() {
int a[7] = {5,7,5,5,1,2,2};
cout<<FindDistinctCount(a,7,3);
return 0;
}