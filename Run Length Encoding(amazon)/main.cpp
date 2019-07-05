#include <iostream>
#include<map>
using namespace std;

int main() {
   string s;
   cin>>s;
   map<char,int> mappy;
   char start = s[0];
   int freq =1;
   int i = 1;
   while(i<s.length()){
       if(s[i]==start){
           freq++;
       }
       else{
           cout<<freq<<start;
           freq = 1;
           start = s[i];
       }
       i++;
   }
    cout<<freq<<start;

}