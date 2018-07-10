#include <iostream>
using namespace std;


int searchIt(int input[], int startIndex , int endIndex, int element){
    if(startIndex>=endIndex){
        return  -1;
    }
    int mid = (startIndex + endIndex)/2;

    if(input[mid]==element){
        return mid;
    }
    else if(input[mid]>element){
        return searchIt(input,startIndex,mid,element);
    }
    else if(input[mid]<element){
        return searchIt(input,mid+1,endIndex,element );
    }
}



int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int element;
    cin>>element;
    cout<<searchIt(a,0,n-1,element);
}