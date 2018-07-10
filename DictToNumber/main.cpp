#include <iostream>
using namespace std;


int titleToNumber(char s[]) {
  int size = 0;
  int pp = 0 ;
  while(s[pp]!='\0'){
    size++;
    pp++;
  }
//  cout<<size;
//  int i = 0;
  int ans = 0;
  int m = 1;

  for(int i  = size-1;i>=0;i--){
//    int code = s[i]- 64;
        int temp;
        if(m==1){
           temp = s[i] - 64;
        }
        else{
           temp  = m* (s[i] - 64);
        }
    cout<<temp<<endl;
    ans= ans + temp;
    m = m*26;
//    i++;
  }
   return ans;

}

int main() {
  char a[3] = {  'A' , 'B'  ,'C' };
  cout<<titleToNumber(a);
    return 0;
}