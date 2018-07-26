#include <iostream>
using namespace std;
string columnDecode(int a, string s){
    if(a==0){
        return  s;
    }
    int temp = a%26;
    if(temp==0){
        s = 'Z' + s;
        return columnDecode((a/26)-1,s);
    }

    char abs = char(temp+64);
//    cout<<abs<<endl;
    s= abs + s;
    return columnDecode((a/26),s);


}

string solution(int a) {
    string ans = columnDecode(a,"");
    return ans;


}



int main() {

    cout<<solution(156);
}