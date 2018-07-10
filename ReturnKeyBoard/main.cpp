#include <iostream>
using namespace std;

int digitCount(int n){

    if(n==0){
        return 0;
    }

    return 1+ digitCount(n/10);
}

bool contains01(int n){
    {
        int temp = n%10;
        if(temp==0||temp==1){
                return true;
        }
        contains01(n/10);
        return false;
    }

}

int getCharsForKeyPad(int num , string output[]){
    if(num==0 || num==1){
        return 0;
    }
    if(num==2){
        output[0] = 'a';
        output[1] = 'b';
        output[2] = 'c';
        return 3;
    }
    if(num==3){
        output[0] = 'd';
        output[1] = 'e';
        output[2] = 'f';
        return 3;
    }
    if(num==4){
        output[0] = 'g';
        output[1] = 'h';
        output[2] = 'i';
        return 3;
    }
    if(num==5){
        output[0] = 'j';
        output[1] = 'k';
        output[2] = 'l';
        return 3;
    }
    if(num==6){
        output[0] = 'm';
        output[1] = 'n';
        output[2] = 'o';
        return 3;

    }
    if(num==7){
        output[0] = 'p';
        output[1] = 'q';
        output[2] = 'r';
        output[3] = 's';
        return 4;
    }
    if(num==8){
        output[0] = 't';
        output[1] = 'u';
        output[2] = 'v';
        return 3;
    }
    if(num==9){
        output[0] = 'w';
        output[1] = 'x';
        output[2] = 'y';
        output[3] = 'z';
        return 4;
    }

}

int keypad(int num, string output[]){
    if(num==0){
        output[0] = " ";
        return 1;
    }
    if(num/10==0){
        return getCharsForKeyPad(num,output);
    }
    else{
        string smallOutput[9999];
        int countDigits = digitCount(num);
        int divider= 1;
        for(int m=1;m<countDigits;m++ ){
            divider = divider*10;
        }
        int smallProcess = keypad(num%divider,smallOutput);

        string firstLetterStrings[9999];
        int firstLetterStringsCount = keypad(num/divider,firstLetterStrings);
        cout<<smallProcess<<" " <<firstLetterStringsCount<<endl;

        int k=0;
        for(int i=0;i<smallProcess;i++){
            for(int j=0;j<firstLetterStringsCount;j++){
                output[k] = firstLetterStrings[j] + smallOutput[i];
                k++;
            }
        }
        return k;
    }
}


int main() {

    string output[9999];
////    cout<<keypad(23,output);
    int count = keypad(98,output);

    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
//    cout<<contains01(98);

}