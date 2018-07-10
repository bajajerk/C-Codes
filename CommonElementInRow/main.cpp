#include <iostream>
#include<map>
using namespace std;

int FindCommonEleInRows(int **a, int rows, int columns){
   map<int,int> mappy;
   for(int i=0;i<rows;i++){
       mappy[a[i][0]]++;
       for(int j=1;j<columns;j++){
           if(a[i][j]!=a[i][j-1]){
               mappy[a[i][j]]++;
           }
       }
   }
   map<int,int> :: iterator it;
   for(it=mappy.begin(); it!=mappy.end();it++){
       if(it->second==rows){
           return it->first;
       }
   }
   return -1;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}