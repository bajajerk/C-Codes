#include <iostream>
#include<set>
#include<string>
using namespace std;

int paranthesis(int n,string output[]){
    if(n==1){
        output[0] = "()";
      return 1;
    }
    string smallOutput[9999];
    int otherlength = paranthesis(n-1,smallOutput);
    set <string> setty;
    for(int i=0;i<otherlength;i++){
        int lengthOfSelected = smallOutput[i].size();
        for (int m=0;m<=lengthOfSelected;m++){
            string temp = smallOutput[i].substr(0,m)+'('+smallOutput[i].substr(m)+')';
            setty.insert(temp);
        }
    }
    int index = 0;
    set<string> :: iterator it;
    for(it=setty.begin(); it!=setty.end();it++)
    {
        output[index] = *it;
        index++;
    }
    return index;
}

int main() {
    string ans[9999];
    int len = paranthesis(2,ans);
    cout<<len<<endl;
    for(int i=0;i<len;i++){
        cout<<ans[i]<<endl;
    }
    return 0;

}