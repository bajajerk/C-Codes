//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
const unsigned int x = 1000000007;

int countDigit(long long n)
{
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}


int num_codes(int a[], int n , int * dpSaver){
//    cout<<"n is"<<n<<endl;

//    for(int i=0;i<n;i++){
//        cout<<a[i];
//    }
//    return 1;

    if(n==1){
        return 1;
    }

    if(n==0){
        return 1;

    }
    if(dpSaver[n]!=-0){
        return dpSaver[n];
    }
    
    int output1 = 0;
    if(a[n-1]>0){
        output1+= num_codes(a , n-1, dpSaver);
    }
    output1 = output1 % x;
    int g = a[n-2]*10 + a[n-1];
    if ( g <=26  && g >9){
        int temp = num_codes(a,n-2,dpSaver);
        temp = temp % x;
        output1+=temp;
    }
    dpSaver[n] = output1;
    return output1;
}

int main()
{
    string n;
    vector <string> v;

    do
    {
        cin>>n;
        v.push_back(n);
    }
    while(n[0]-'0'!=0);


    for(int i=0;i<v.size();i++)
    {
        string str = v[i];

        if(str.size()==1 && str[0]-'0' == 0)
            break;

        int v1[str.size()];
        for(int j=0;j<str.size();j++)
        {

            v1[j] = (str[j] - '0');

        }
        int size = str.size()+1;
        int *output = new int[size];

        for(int k=0;k<size;k++)
            output[k] = 0;


        long long int ans = num_codes(v1,str.size(),output);

        cout<<ans;
        cout<<endl;
    }
    }