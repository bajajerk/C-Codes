#include <iostream>
#include<map>
#include<math.h>
using namespace std;

int allWays(int x, int n) {
    map<int,int> mappy;
    for(int i=1;i<=n;i++){
        mappy[i*i]++;
   }
   cout<<mappy[36]<<endl;
   int count = 0;
   for(int i=n-1;i>=1;i--){
       int itsSquare = i*i;
       int leftOutSqure = pow(n,2) - itsSquare;
       if( leftOutSqure != itsSquare){
           if(mappy[leftOutSqure]>=1 && mappy[itsSquare]>=1){
               cout<<leftOutSqure<<"  "<<itsSquare<<endl;
               count ++;
           }
       }
   }
   return count;

};

int main() {
    int a;
    cin>>a;
    cout<<allWays(2,a);
    return 0;
}