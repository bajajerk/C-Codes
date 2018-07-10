#include <iostream>
using namespace std;


void printLeaves(char first[], char second[] , string outPutSoFar){
//    cout<<"Aaya";
    if(strlen(first)==0 && strlen(second)==0){
//        cout<<"?";
        cout<<outPutSoFar;
        cout<<endl;
        return;
    }
    if(strlen(first)>=1){
         printLeaves(first+1,second,outPutSoFar+first[0]);
    }
    if(strlen(second)>=1){
         printLeaves(first,second+1,outPutSoFar+second[0]);

    }

}

void interleaving(char first[], char second[]) {
    string ans = "";
//    cout<<strlen(first)<<strlen(second);
	printLeaves(first,second,ans);
}

int main() {


    char a[3] = {'a'  ,'b' , '\0'};
    char b[3] = {'c', 'd' , '\0'};
    interleaving(a,b);
}