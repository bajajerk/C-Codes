#include <iostream>
using namespace std;

bool checkabHelper(char input[]){
//    cout<<strlen(input);
    if(input[0]=='\0'){
        cout<<"return true";
        return true;
    }
    if(input[0]=='a' ){
        if(input[1]=='a' || input[1]=='\0'){
            cout<<"?";
            checkabHelper(input+1);
        }
        else if(input[1]=='b' && input[2]=='b'){
            checkabHelper(input+1);
        }
        else{
            return false;
        }
    }
    if(input[0]=='b'){
        if(input[1]!='b'){
            checkabHelper(input+1);
        }
        else if (input[1]=='b'){
            if(input[2]=='a' || input[2]=='\0'){
                checkabHelper(input+2);
            }
            else{
                return false;
            }
        }
    }
}

bool checkAB(char input[]) {

    if(input[0]!='a'){
        return false;
    }
    bool ans = checkabHelper(input);
    cout<<"Ans is   "<<ans<<endl;
    return ans;
//    return checkabHelper(input);

}

int main() {
    char a[3] = { 'a' , 'a' ,'\0'};
        bool aa = checkAB(a);
        cout<<aa;

    return 0;
}