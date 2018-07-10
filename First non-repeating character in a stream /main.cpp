#include <iostream>
#include<string.h>
#include<queue>
#include<map>
using namespace std;



int main() {
    map<char , int > mappy;
    queue<char> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char s;
        cin>>s;
        if(mappy[s]==0){
            mappy[s] = 1;
            if(!q.empty()){
                cout<<q.front();
                q.push(s);
            }
            else{
                cout<<s;
                q.push(s);
            }
        }
        else if (mappy[s]==1){
            q.pop
        }
    }


}