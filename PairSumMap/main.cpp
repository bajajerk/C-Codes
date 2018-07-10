#include <iostream>
#include<map>
using namespace std;

int summer(int n){
    int sum  = 0;
    for(int i=1;i<=n-1;i++){
        sum+=i;
    }
    return sum;
}

void pairSum(int a[], int n, int x) {

    map <int,int> mappy;
    for(int i=0;i<n;i++){
       mappy[a[i]]++;
    }

    for(int i=0;i<n;i++){
        if(a[i] == x-a[i]){
            int count  = mappy[a[i]];
            int freq = summer(count);
            for(int l =1;l<=freq;l++){
                cout<<a[i]<<" "<<a[i]<<endl;
            }
            mappy[a[i]] = 0;

        }
        else{
            if(mappy[a[i]]>=1){
                if(mappy[x-a[i]]>=1){
                    int product = mappy[a[i]] * mappy[x-a[i]];
                    for(int k=1;k<=product;k++){
                        cout<<min(a[i], x-a[i]);
                        cout<<" ";
                        cout<<max(a[i], x-a[i]);
                        cout<<endl;
                    }
                    mappy[a[i]] = 0;
                    mappy[x-a[i]] = 0;
                }
            }

        }

    }

}



int main() {
   int a[9] = {1, 3 ,6 ,2, 5, 4, 3, 2, 4};
   pairSum(a,9,7);
}