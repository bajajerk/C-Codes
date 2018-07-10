#include <iostream>
#include<map>
using namespace std;


//Given an array, find and return the length of longest subarray containing equal number of 0s and 1s.
//Input Format :
//Line 1 : Integer N, size of array
//Line 2 : Array elements (separated by space)
//Output Format :
//Length of longest subarray
//Constraints :
//1<= N <=10^6
//Sample Input 1 :
//6
//1 0 0 1 1 1
//Sample Output 1 :
//4
//Sample Input 2 :
//10
//1 1 1 0 0 0 1 1 0 0
//Sample Output 2 :
//10



int max(int arr[], int n) {
 int farzi[n];
 for(int i=0;i<n;i++){
     if(arr[i]==0){
         farzi[i] = -1;
     }
     else{
         farzi[i] = arr[i];
     }
 }

 int summy[n];
 summy[0]= farzi[0];
 for(int i=1;i<n;i++){
     summy[i] = summy[i-1]+ farzi[i];
 }
 int maxxy  =-1;
    for(int i =0;i<n;i++){
        cout<<summy[i]<<endl;
    }
 map<int,int> mappy;
 for(int i=0;i<n;i++){
     if(summy[i]==0){
         if(i+1>maxxy){
             maxxy = i+1;
         }
     }
     if(mappy[summy[i]]>=1){
         int temp = i+1-mappy[summy[i]] ;
         if(temp>maxxy){
             maxxy = temp;
         }
     }
     else{
         mappy[summy[i]] = i+1;
     }
 }
 return maxxy;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    cout<<max(a,n);
    return 0;
}