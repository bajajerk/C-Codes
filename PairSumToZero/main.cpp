#include <iostream>
#include<map>
using namespace std;

void pairSum(int a[], int size, int x) {
    map <int,int> mappy;
    for(int i = 0;i<size;i++){
        mappy[a[i]]++;
    }
    for(int i=0;i<size;i++){
        if(mappy[x-a[i]]>0 && mappy[a[i]]>0){
            for(int k =1;k<=mappy[x-a[i]];k++){
                cout<<min(a[i],x-a[i])<<" "<<max(a[i],x-a[i])<<endl;
            }
            mappy[a[i]]--;
//            mappy[x-a[i]] = 0;
        }
    }

}

int main() {
    int a[9] = {1,3,6,2,5,4,3,2,4};
    pairSum(a,9,7);
    return 0;
}