#include <iostream>
using namespace std;


void replacePi(char input[]) {
    if(input[0]=='\0'){
        return ;
    }
    if(input[0]!='p'){
        replacePi(input+1);
    }
    if(input[0]=='p'){
        if(input[1]=='i'){
            int len = strlen(input);
            for(int j=len;j>1;j--){
                input[j+2] = input[j];
            }
            input[0] = '3';
            input[1]= '.';
            input[2] = '1';
            input[3]= '4';
            replacePi(input+4);
        }
        else{
            replacePi(input+1);
        }
    }


}

int main() {
    char a[3] = {'p' , 'i','\0'};
    replacePi(a);
    int i =0;
    while(a[i]!='\0'){
        cout<<a[i];
        i++;
    }
    return 0;
}