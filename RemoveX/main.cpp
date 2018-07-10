#include <iostream>
using namespace std;

void removeX(char input[]) {
    if(input[0]=='\0'){
        return;
    }
    else if(input[0]!='x'){
        removeX(input+1);
    }
    else{
        int len = strlen(input);
        for(int i=1;i<=len;i++){
            input[i-1] = input[i];
        }
        removeX(input);
    }

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}