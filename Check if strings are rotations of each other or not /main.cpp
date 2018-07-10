#include <iostream>
#include<string.h>
using namespace std;

int main() {
   string s1;
   string s2;
   cin>>s1>>s2;

   int j=0;
   while(s2[j]!=s1[0]){
       j++;
   }


   bool done = false;
// For first string
   int i = 0;
   while(j<s2.size()){
       if(s2[j]==s1[i]){
           j++;
           i++;
       }
       else{
           cout<<"0";
           done = true;
           break;

       }

   }
   if(!done){
       j=0;
       while(i<s1.size()){
           if(s2[j]==s1[i]){
               j++;
               i++;
           }
           else{
               cout<<"0";
               done = true;
               break;
           }

       }
   }
    return 0;
}