#include <iostream>
#include<vector>
using namespace std;


bool checkMaxHeap(int a[], int n){
    for(int i=0;i<n;i++){
        int left  = 2*(i) +1;
        int right  = 2*(i) +2;

        if(left < n){
            if(a[left]<a[i]){
                break;
            }
        }
        if(right<n){
            if(a[right] < a[i]){
                break;
            }
        }
    }
    return true;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}