#include <iostream>
#include <string.h>
using namespace std;

char getChar(int num){
    char ans = 'a' + num - 1;
    return ans;
}

int getCodes(string input, string output[10000]) {
    if(input.size()==0){
        output[0]="";
        return 1;
    }
    else if(input.size()>=1){
        int outputSize = 0;
        if(input.size()>=2){
            int firstNumber  = input[0] - '0';
            int secondNumber  = input[1] - '0';
            int number  = firstNumber*10 + secondNumber;
            if(number<=26) {
                string small2Output[10000];
                outputSize += getCodes(input.substr(2), small2Output);
//                cout<<outputSize;
                for (int i = 0; i < outputSize; i++) {
//                    cout<<" number  "<<getChar(number)<<endl;
                    output[i] = getChar(number) + small2Output[i];
                }
//                cout<<output[0]<<endl;
            }
        }
//        Handle one digit
        string smallOutput[10000];
        int smallAns = getCodes(input.substr(1),smallOutput);
        for(int i=0;i<smallAns;i++){

            char a  = input[0];
            int num = a - 48;
//            cout<<"get me "<<getChar(num) + smallOutput[i]<<endl;
            output[i+outputSize] = getChar(num) + smallOutput[i];
        }
        return smallAns + outputSize;
    }
}



int main() {
    string a;
    cin>>a;
    string output[10000];
    int ans  = getCodes(a,output);
//    cout<<endl<<"lenght of ans is  " << ans<<endl;
    for(int i=0;i<ans;i++){
        cout<<output[i]<<endl;
    }


    return 0;
}