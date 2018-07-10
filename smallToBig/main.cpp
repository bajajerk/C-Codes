#include <iostream>
#include<cstring>
using namespace std;

int main() {
   string s;
//   cin>>s;
   getline (cin, s);

//    cout<<s.size();
   int smalla = 'a' + 0;
   int smallz = 'z' + 0;
   int bigA = 'A' +0;
   int bigZ = 'Z' + 0;

//   cout<<smalla<<endl<<smallz<<endl<<bigA<<endl<<bigZ;
//
//    97
//    122
//    65
//    90

   for(int i=0;i<s.size();i++){
       if(s[i]>=smalla && s[i]<=smallz){
           char ans = s[i] -32;
           cout<<ans;
       }
       else if(s[i]>=bigA && s[i]<=bigZ){
           char ans = s[i] +32;
           cout<<ans;
       }
       else{
           cout<<s[i];
       }
   }
}