#include <iostream>
using namespace std;

int gcd(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}


int ScpFact(int a, int b) {
    for(int i=a-1;i>=0;i--){
        if(a%i==0){
//            cout<<i<<endl;
            if(gcd(b,i)==1){
                return i;
            }
        }
    }

}



int main() {
    cout<<ScpFact(30,12);
//    cout<<gcd(5,12);
    return 0;
}