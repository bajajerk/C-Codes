#include <iostream>
using namespace std;
int m = 6;
int partition(int a[], int startIndex,int endIndex){
    int initialElement = a[startIndex];
    int lesserCount = 0 ;
    for(int i = startIndex; i<=endIndex;i++){
        if(a[i]<initialElement){
            lesserCount ++;
        }
    }
//    cout<<lesserCount<<endl;
    swap(a[startIndex],a[startIndex+lesserCount]);
//    cout<<a[startIndex+lesserCount]<<endl;
    int l  = startIndex;
    int  r  = endIndex;
//    cout<<startIndex<<" "<<endIndex<<endl;
    while( r - l>=1){
        if(a[l]<initialElement){
            l++;
        }
        if(a[r]>initialElement){
            r--;
        }
        if(a[r]<initialElement && a[l]>initialElement){
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }
    cout<<"ola";
    for(int f = startIndex;f<=endIndex;f++){
        cout<<a[f]<<" ";
    }
    cout<<endl;
    return startIndex+lesserCount;
}

void quickSort(int input[],int startIndex,int endIndex){
//
//    if(startIndex>=endIndex){
//        return;
//    }
//    if(startIndex<0 || endIndex>=m){
//        return;
//    }
    if(startIndex<endIndex){
        int partElement = partition(input,0,endIndex);
        quickSort(input,startIndex,partElement-1);
        quickSort(input,partElement+1,endIndex);
    }
    return;

}

int main() {
//    cout<<"hi";
    int b[6]= {2,6,8,5,4,3};
    int arr[10] = {9,5,4,6,3,10,11,100,1,0};
//    cout<<partition(b,0,5);
     quickSort(b,0,5);
    return 0;
}