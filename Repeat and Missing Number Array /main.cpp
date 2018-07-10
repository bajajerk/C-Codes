#include <iostream>
#include<vector>
using namespace std;
vector<int> repeatedNumber(const vector<int> &a) {
    int n  = a.size();
    double  genuine_sum = (n * (n+1) )/2;
    double  farzi_sum = 0;
    double  genuine_product = 1;
    double farzi_product  = 1;
    for(int i=0;i<n;i++){
        genuine_product = genuine_product*(i+1);
        farzi_product = farzi_product * a[i];

        farzi_sum  = farzi_sum + a[i];
    }
    double  num  =   -genuine_sum + farzi_sum;
    double den =  (farzi_product/genuine_product)-1;

    double   x = num/den;
    double y = farzi_sum - genuine_sum + x;
    vector<int> ans.
    ans.push_back(y);
    ans.push_back(x);
    return ans;

}


int main() {
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a.push_back(t);
    }

    vector<int> rr = repeatedNumber(a);
}