#include <iostream>
#include<map>
using namespace std;

int LengthOfLongestSeq(int a[], int n){
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
                number+=1;
                count++;
            }
            number = a[i]-1;
            while(mappy[number]>0){
//                cout<<number<<endl;
                mappy[number] = 0;
                number-=1;
                count++;
            }
            if(count>maxxy){
                maxxy = count;
            }
        }
    }
    return maxxy;
}


int main() {
    int a[5] = {3,4,1,2,0};
    cout<<LengthOfLongestSeq(a,5);
    return 0;
}