#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    bool isPrime[n+1];

    for(int i=0;i<n+1;i++){
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i=2;i<=sqrt(n);i++){
        if(isPrime){
            int j=i;
            int starter = i*j;
            while(i*j<=n){
                isPrime[i*j] = false;
                j++;
            }
        }
    }
    for(int i=0;i<n;i++){
       if(isPrime[i]){
           cout<<i<<endl;
       }
    }



    return 0;
}