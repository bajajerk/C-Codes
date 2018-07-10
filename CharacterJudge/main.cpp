#include<iostream>
using namespace std;

int main() {
    char a;
    cin>>a;
    int smalla = 97;
    int smallz = 122;
    int bigA = 65;
    int bigZ = 90;

    int result = a+0;
//    cout<<result<<endl;
//    cout<<bigA<<endl<<bigZ;
    if(bigA<=result && result<=bigZ){
        cout<<"1";
    }
    else if(smalla<=result && result<=smallz){
        cout<<"0";
    }
    else{
        cout<<"-1";
    }



}
