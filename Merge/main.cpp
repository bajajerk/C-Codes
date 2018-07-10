#include <iostream>
using namespace std;

void hi(){
//    cout<<"fucked";
}
void merge(int arr[],int start, int end){
    int mid = (start+end)/2;
    int n1  = mid-start+1;
    int n2  = end - mid;
    int a[n1] , b[n2];

    int index = 0;
    for(int i = start ; i<=mid;i++){
        a[index] = arr[i];
        index++;
    }
    index = 0;
    for(int i = mid+1 ; i<=end; i++){
        b[index] = arr[i];
        index++;
    }

    int i=0 , j = 0;
    int overAllIndex = 0;
    while(i<=n1-1 &&  j<=n2-1){

        if(a[i]<b[j]){
            arr[overAllIndex] = a[i];
            overAllIndex++;
            i++;
        }
        else {
            arr[overAllIndex] = b[j];
            overAllIndex++;
            j++;
        }
    }
//cout<<i<<j;
    if(j!=n2){
        while(j!=n2){
            arr[overAllIndex] = b[j];
            overAllIndex++;
            j++;
        }
    }

    if(i!=n1){
        while(i!=n1){
            arr[overAllIndex] = a[i];
            overAllIndex++;
            i++;
        }
    }

}


int main() {
    cout<<"Hello";
//    hi();
    int * arr = new int[3];
//    int arr[3];
    arr[0] = 1;
    arr[1] = 3;
    arr[2] = 2;
    merge(arr,0,2);
    for(int k = 0;k<3;k++){
        cout<<arr[k];
    }
    return 0;
}