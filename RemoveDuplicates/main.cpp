#include <iostream>
using namespace std;


void trimSpaces(char input[]) {
if(input[0]=='\0'){
    return;
}
if(input[0]!='\0'){
    trimSpaces(input+1);
}
else if (input[0]==' '){
    int m = 1;
    while(input[m]!='\0'){
        input[m-1] = input[m];
    }
    input[m-1] = '\0';
    trimSpaces(input+1;)
}

}


void removeConsecutiveDuplicates(char input[]) {
    if(input[0]=='\0'){
        return;
    }
    else if (input[0]!=input[1]){
        removeConsecutiveDuplicates(input+1);
    }
    else if(input[0]==input[1]){
        int j=1;
        while(input[j]==input[0]){
            j++;
        }

        int m =j;
        while(input[m]!='\0'){
            input[m-j-0+1] = input[m];
            m++;
        }

        input[m-j+1] = '\0';
        removeConsecutiveDuplicates(input+1);
    }


}
int main() {

    char input[7] = {'a' , 'a' , 'b' ,'c' , 'c' , 'b' , 'a'};
    removeConsecutiveDuplicates(input);
    int fucker = 0;
    while(input[fucker]!='\0'){
        cout<<input[fucker];
        fucker++;
    }
//    if(input[0]==input[1]){
//        int j=1;
//        while(input[j]==input[0]){
//            j++;
//        }
//
//        int m =j;
//        while(input[m]!='\0'){
//            input[m-j-0+1] = input[m];
//            m++;
//        }
//        input[m-j+1] = '\0';
//    }
//    cout<<input[3];
    return 0;
}