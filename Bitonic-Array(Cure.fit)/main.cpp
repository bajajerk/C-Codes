#include <iostream>
using namespace std;

int getBitonicElement(int a[], int start, int end){
    if(end<start){
        return -1;
    }
    int mid = (start+end)/2;
    if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
        return mid;
    }
    else if(a[mid]>a[mid-1] && a[mid]<a[mid+1]){
        return getBitonicElement(a,mid+1,end);
    }
    else if(a[mid]<a[mid-1] && a[mid]>a[mid+1]){
        return getBitonicElement(a,start,mid-1);
    }
}

int binarySearch(int a[], int start, int end, int element){

    int mid = (start+end)/2;
    if(a[mid]==element){
        return mid;
    }
    else if(a[mid]> element){
        return binarySearch(a,start, mid-1, element);
    }
    else if(a[mid]< element){
        return binarySearch(a,mid+1, end, element);
    }

}
int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   cout<<getBitonicElement(a,0,n-1);
    return 0;
}