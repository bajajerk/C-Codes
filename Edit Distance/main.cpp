#include <iostream>
#include<cstring>
using namespace std;

int editDistance(string s1, string s2){
    if(s1.size() ==0 || s2.size() ==0)
    {
        int sizee = max(s1.size(), s2.size());
        return sizee;
    }

    if(s1[0]==s2[0]){
        return  editDistance(s1.substr(1), s2.substr(1) );
    }
    else{
        int insertion = editDistance(s1.substr(1), s2);
        int deletion = editDistance(s1,s2.substr(1));
        int updation = editDistance(s1.substr(1), s2.substr(1));
        return 1 + min(insertion, min(deletion,updation));
    }
}

int main() {
string s1 = "abc";
string s2 = "dc";
cout<<editDistance(s2,s1);
    return 0;

}