#include <iostream>
using namespace std;

int countStepsTo1(int n){
  int a[n+1];
  a[0] = 0;
  a[1] = 0;
  a[2] = 1;
  a[3] = 1;
  for(int i=4; i<=n;i++){
    int minny = INT_MAX;
    int x = INT_MAX;
    int y = INT_MAX;
    int z = INT_MAX;

    if(i%2==0){
      x = a[i/2];
    }
     if(i%3==0){
      y= a[i/3];
    }
    z = a[i-1];
    if(i==6){
        cout<<x<<endl<<y<<endl<<z<<endl;
    }
    a[i] = 1+min(z,min(y,z));
  }
  return a[n];

}

int main() {
    cout<<countStepsTo1(6);
    return 0;
}