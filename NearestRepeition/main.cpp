//Given an integer array, find and return the minimum distance between indexes of an element and its repetition.
//Input Format :
//Line 1 : Integer N, Size of array
//Line 2 : Elements of the array (separated by space)
//Output Format :
//Print the minimum distance
//Contraints :
//1<= N <=10^6
//Sample Input 1:
//6
//1 3 1 5 4 3
//Sample Output 1:
//2
//Sample Input 2:
//7
//5 47 82 4 4 6 2
//Sample Output 2:
//1

#include <cmath>
#include <iostream>
#include<map>
using namespace std;

int minDistance(int a[],int n){
    int minny=INT_MAX;
    map<int,int> mappy;
    for(int i=0;i<n;i++){
        if(mappy[a[i]]>=1){
            int temp = i+1-mappy[a[i]] ;
            minny  = min(temp,minny);
            mappy[a[i]] = i+1;
        }
        else{
            mappy[a[i]] = i+1;
        }
    }
    return minny;
}


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    cout<<minDistance(a,n);
    return 0;
}