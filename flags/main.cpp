#include <iostream>
#include<string>
#include<set>
using namespace std;

int helper(int n , string s[][999]){
    if(n==0){
        s[0][0] == 'R';
        s[1][0] == 'W';
        return 2;
    }
    else if(n==2){
        s[0] == 'RW';
        s[1][0] == 'WR';
        return 2;
    }
    else{
        string leftOutString[9999][9999];
        int smallSize =  helper(n-1,leftOutString);

    }

}



long long find_Ways(int n)
{
    string s;
    helper(n,s)



}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}