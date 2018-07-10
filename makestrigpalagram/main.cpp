#include <iostream>

#include<string.h>
#include<map>
using namespace std;

int makeAnagram(char str1[], char str2[]){
    int ans = 0;
    map<char,int> mappy;
    int j=0;
    while(str1[j]!='\0'){
        mappy[str1[j]]++;
        j++;
    }
    int k=0;
    int len = strlen(str2);
    while(k<len){
        if(mappy[str2[k]]>=1){
            mappy[str2[k]]--;
            k++;

        }
        else{
            ans++;
            k++;
        }
    }
    map<char , int> :: iterator it;
    for(it=mappy.begin();it!=mappy.end();it++){

        ans+=it->second;
    }
    return ans;
}


int main() {
   char a[4] = {'a' ,'a' ,'b', '\0'};
   char b[4]  ={'a' ,'b' , 'a', '\0'};
  cout<< makeAnagram(a,b);

    return 0;
}