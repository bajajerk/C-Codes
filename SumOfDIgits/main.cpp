#include <iostream>
using namespace std;

int countDigit(long long n)
{
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

int countDigitsSum(long long  n){
    if(n==0){
        return 0;
    }
    int digits = countDigit(n);
    int k  = 1;
    for(int i=1;i<digits;i++){
        k = k * 10;
    }

    int firstDigit = n/k;
    int count = 0;
    for(int i=0;i<firstDigit;i++){
        int temp  = i * k;
        temp +=   (k/10) * 45  * (digits-1);
        count+=temp;
    }

    count += firstDigit* (n%k + 1);
    count+= countDigitsSum(n%k);
    return count;

}

int main() {
    while(true) {
        long long a;
        long long b;
        cin >> a >> b;
        if(a==-1 || b==-1){
            break;
        }

        else{
            cout<<countDigitsSum(b) - countDigitsSum(a-1)<<endl;
        }
    }
    return 0;
}