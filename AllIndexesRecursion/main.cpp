#include <iostream>
using namespace std;


int allIndexes(int input[], int n, int element, int output[],int found,int index) {
    if(index == n){
        return 0;
    }

    if(input[index] == element){
        cout<<"Here its inserting with i  "<<index<<endl;
        output[found] = index;
        return 1 + allIndexes(input, n ,element, output , found+1 , index+1);
    }
    else{
        return allIndexes(input,n,element,output,found, index+1);
    }
}


int main() {
     int output[999];
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     int element;
     cin>>element;
     int len = allIndexes(a,n,element,output,0,0);
     for(int i=0;i<len;i++){
         cout<<output[i]<<endl;
     }
    return 0;
}