#include <iostream>
#include<math.h>
using namespace std;
int titleToNumber(string a) {

    int mul  = 1;
    int count = 0;

    for(int i=a.length()-1;i>=0;i--){
        int k = a[i] - 'A' + 1;
        cout<<k<<endl;
        int temp = k* mul;
        count+=temp;
        mul = mul * 26;

    }
    return count;

}

int main() {
     cout<<titleToNumber("AAA");
    return 0;
}