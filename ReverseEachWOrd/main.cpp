#include <iostream>
#include<string.h>

using namespace std;

void removeConsecutiveDuplicates(char input[]) {
int i=0;
string s;
    while(input[i]!= '\0'){
        if(input[i+1]!=input[i]){
            s.push_back(input[i]);
            i++;
        }
        else{
            int j = i;
            s.push_back(input[i]);
            while(input[j]!=input[i]  && input[j]!='\0'){
                j++;
            }
            i = j;
        }
    }
    for(int k= 0;k<s.size();k++){
        input[k] = s[k];
    }
    input[s.size()] = '\0';

}


void reverseEachWord(char input[]) {
//    for(int i=0;i<24;i++){
//        cout<<input[i];
//    }
    int len = strlen(input);
    char s[len];
    int i = 0;
    int m = 0;
    while(input[i]!='\0'){
//        cout<<input[10]<<endl;
//        cout<<i<<" "<<input[i]<<" ";
        int j= i;
        while(input[j]!=' ' &&input[j]!='\0'){
            j++;
        }
//        cout<<j<<input[j]<<endl;
        for(int k =j-1;k>=i;k--){
            s[m] = input[k];
            m++;
        }
        s[m] = ' ';
        m++;
        i = j+1;

    }
    for(int k = 0;k<len;k++){

        input[k] = s[k];
    }
//    input[0]= 'a';
}


int main() {
    char a[25];
    cin.getline(a,25);
    reverseEachWord(a);

    for(int i=0;i<24;i++){
        cout<<a[i];
    }

    return 0;
}