#include <iostream>
#include <vector>
using namespace std ;
void merge(int *arr,int start, int end){
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
    int overAllIndex = start;
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


//void merge(int *a,int s,int e){
//    int mid = (s+e)/2;
//
//    int i = s;
//    int j = mid+1;
//    int k = s;
//
//    int temp[100];
//
//    while(i<=mid && j<=e){
//        if(a[i] < a[j]){
//            temp[k++] = a[i++];
//        }
//        else{
//            temp[k++] = a[j++];
//        }
//    }
//    while(i<=mid){
//        temp[k++] = a[i++];
//    }
//    while(j<=e){
//        temp[k++]  = a[j++];
//    }
//
//    //We need to copy all element to original arrays
//    for(int i=s;i<=e;i++){
//        a[i] = temp[i];
//    }
//
//}

void mergeSort(int arr[], int startIndex, int endIndex){
//    for(int i=startIndex;i<=endIndex;i++){
//        cout<<arr[i];
//    }
//    cout<<endl;
    if(startIndex>=endIndex){
        return;
    }

    int mid =( startIndex + endIndex )/2;
    mergeSort(arr,startIndex,mid);
    mergeSort(arr,mid+1,endIndex);
    merge(arr,startIndex,endIndex);

}
int main() {
    cout << "Hello, World!" <<endl;
//    int * arr = new int[4];
    int arr[4];
    arr[0] = 4;
    arr[1] = 3;
    arr[2] = 2;
    arr[3] = 1;
    mergeSort(arr,0,3);
    cout<<endl;
    for(int i =0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}