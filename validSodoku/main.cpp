#include <iostream>
#include<set>
using namespace std;


bool checkValid(int a[9][9], int numRows, int numCols){
    for(int i=0;i<9;i++){
        set<int> s;
        for(int j=0;j<9;j++){
            if(a[i][j]==0){

            }
            else{

                int orignalSize = s.size();
                s.insert(a[i][j]);
                if(s.size() == orignalSize){
                    cout<<s.size()<<endl;
                    cout<<i<<"and  "<<j<<" is   "<<endl;
                    return false;
                }
            }
        }
    }

    for(int i=0;i<9;i++){
        set<int> s;
        for(int j=0;j<9;j++){
            if(a[j][i]==0){

            }
            else{
                int orignalSize = s.size();
                s.insert(a[j][i]);
                if(s.size() == orignalSize){
                    cout<<s.size()<<endl;
                    cout<<i<<"and  "<<j<<" is   "<<endl;
                    return false;
                }
            }

        }
    }

    for(int i=0;i<9;i=i+3){
        for(int j=0;j<9;j=j+3){
            set <int > s;
            for(int k=i;k<=i+2;k++){
                for(int l = j;l<=j+2;l++){
                    if(a[k][l]==0){

                    }
                    else{
                        int orignalSize = s.size();
                        s.insert(a[k][l]);
                        if(s.size() == orignalSize){
                            return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}

int main() {
   int arr[9][9];
   for(int i=0;i<9;i++){
       for(int j=0;j<9;j++){
           cin>>arr[i][j];
       }
   }

   cout<<checkValid(arr, 9,9);
}