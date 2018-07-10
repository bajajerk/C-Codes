#include <iostream>
#include<map>
using namespace std;

int FindMaximumEqualCount(int a[], int n, int k){
    map<int,int> mappy;
    for(int i=0;i<n;i++){
        mappy[a[i]]++;
    }
    int maxxy = INT_MIN;
    for(int i=0;i<n;i++){
        if(mappy[a[i]]>0){
            int number = a[i];
            int count = 0;
            //Move right
            while(mappy[number]>0){
//                cout<<number<<endl;
                mappy[number] = 0;
                count+=number;
                number+=1;
            }
            number = a[i]-1;
            while(mappy[number]>0){
//                cout<<number<<endl;
                mappy[number] = 0;
                count+=number;
                number-=1;
            }
            cout<<count<<endl;
            count = count/k;
            if(count>maxxy){
                maxxy = count;
            }
        }
    }
    return maxxy;
}



int main() {
    int a[5] = {0,4,1,3,2};
    cout<<FindMaximumEqualCount(a,5,3);
    return 0;
}