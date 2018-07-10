#include <iostream>
using namespace std;



void lexHelper(int n , int starter){
    if(starter>n){
        return;
    }
    cout<<starter<<endl;
    for(int i=0;i<10;i++){
        lexHelper(n,(starter*10) + i);
    }
//    lexHelper(n,starter+1);
}
void lexicographicalOrder(int num){
    for(int i=1;i<10;i++){
        lexHelper(num,i);
    }

}

int main(){
    int n;
    cin>>n;
    lexicographicalOrder(n);
}