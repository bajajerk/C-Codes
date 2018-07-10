#include <iostream>
#include<math.h>
using namespace std;

int sumTIllN(int n){
    int sum=0;
    int ans  = (n * (n+1))/2;
    return ans;
}
int main() {
    int t;
    cin>>t;
    for(int r = 1;r<=t;r++){
        int n;
        cin>>n;
        int a = sqrt(n);
        int ans;
        while(n-sumTIllN(a)>=0){
            ans = a;
            a++;
        }

        cout<<ans<<endl;

    }

}