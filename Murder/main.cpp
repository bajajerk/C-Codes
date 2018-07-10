#include <iostream>
#include<algorithm>
using namespace std;


int help_me_for_murder_count(int a[],int startIndex , int mid , int endIndex){

    int count = 0;
    int a1[mid-startIndex+1];
    int a2[endIndex-mid];

    for(int i=0;i<mid-startIndex+1;i++){
        a1[i] = a[startIndex+ i];
    }

    for(int i=0;i<endIndex-mid;i++){
        a2[i] = a[mid+i+1];
    }
    int n1= mid-startIndex+1;
    int n2 = endIndex-mid;
    sort(a1,a1+n1);
    sort(a2,a2+n2);
    int k = 0;
    int l = 0;
    while(k<n1 && l<n2){
        if(a1[k]<a2[l]){
            int temp = a1[k]  * (n2-l);
            count = count + temp;
            k++;
        }
        else{
            l++;
        }
    }
    return count;

}

int merge_helper(int a[],int startIndex,int endIndex){
    int count = 0;
    int mid = (startIndex+endIndex)/2;
    if(endIndex>startIndex){
         int x = merge_helper(a, startIndex, mid);
        int y = merge_helper(a,mid+1,endIndex);
        int z = help_me_for_murder_count(a,startIndex,mid,endIndex);
//        cout<<count<<" "<<x<<" "<<y<<" "<<z<<endl;
        count  = count+x+y+z;
    }

    return count;
}

int main() {
    int t;
    for(int r=1;r<=t;r++) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = merge_helper(a, 0, n - 1);
        cout << ans<<endl;
    }

}




//cout<<"a1    ";
//for(int i=0;i<mid-startIndex+1;i++){
//cout<<a1[i]<<" ";
//}
//cout<<endl;
//
//cout<<"a2    ";
//for(int i=0;i<endIndex-mid;i++){
//cout<<a2[i]<<" ";
//}
//cout<<endl;