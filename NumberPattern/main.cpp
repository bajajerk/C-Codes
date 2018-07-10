#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
   for(int i=0;i<n;i++){
     for(int k=n-i;k<=n-1;k++){
          cout<<k;
     }
     for(int k=1;k<=n-i;k++){
       cout<<n;
     }
     cout<<endl;
   }
}