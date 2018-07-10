#include <iostream>
#include<map>
using namespace std;

int countDigit(long n)
{
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
//    cout<<"?";
    return count;
}

long  getNumbersGreater(int a[], int n, int fact[], map<int,int> mappy){
    if(n==0 || n==1){
        return 0;
    }

    else{
        long ans = 0;
        for(int i=a[0]+1;i<10;i++){
            if(mappy[i]>0){
                mappy[i]--;

                long temp = fact[n-1];
                for(int i=0;i<10;i++){
                    if  (mappy[i]>=2){
                        temp  = temp/fact[mappy[i]];
                    }
                }

                ans+=temp;
                mappy[i]++;
            }
        }
        mappy[a[0]]--;
        ans = ans + getNumbersGreater(a+1,n-1,fact,mappy);
        return ans;
    }
}
long numberOfNumbersWithDuplicates(long n){
    long number  = n;
//    cout<<n<<endl;
    int digits =  countDigit(n);
//    cout<<digits;
    int a[digits];
    for(int i=digits-1;i>=0;i--){
        a[i] = number%10;
        number  = number/10;
    }
    map <int,int> mappy;
    for(int i=0;i<digits;i++){
        mappy[a[i]]++;
    }

    int fact[10];
    fact[0] = 1;
    for(int i=1;i<digits;i++){
        fact[i] = i * fact[i-1];
    }
//    return 1;

    return getNumbersGreater(a,digits,fact,mappy);

}


int main() {
    int n;
    cin>>n;
    cout<<endl;
    cout<<numberOfNumbersWithDuplicates(n);
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    map <int,int> mappy;
//    for(int i=0;i<n;i++){
//        mappy[a[i]]++;
//    }
//
//    int fact[10];
//    fact[0] = 1;
//    for(int i=1;i<n;i++){
//        fact[i] = i * fact[i-1];
//    }
//
//    int count = getNumbersGreater(a,n,fact,mappy);
//    cout<<count;


}