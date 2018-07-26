#include <iostream>
#include<stack>
#include<map>
#include<vector>
#include<string>
using namespace std;


vector<char> saveit;
void printPostFix(string s){
    map<char,int> mappy;
    mappy['/'] = 100;
    mappy['*'] = 100;
    mappy['+'] = 10;
    mappy['-'] = 10;

    stack <char> stacky;
    stacky.push('(');
    while(!stacky.empty()){
        for(int i=0;i<s.size();i++){
            if(s[i]=='*' || s[i]=='/' || s[i]=='+' || s[i]=='-' ){
//                cout<<"I am"<<s[i]<<" on top is"<<stacky.top()<<endl;
                char upar = stacky.top();

                //Top me bhi operator padha h
                if(mappy[upar]>0){
                    if(mappy[upar]<mappy[s[i]]){
//                        cout<<"mc";
                        stacky.push(s[i]);
                    }else{
//                        cout<<"rand";
//                        cout<<"Upar vala is "<<upar<<endl;
                        while(mappy[s[i]]<=mappy[upar]){
                            cout<<upar;
                            saveit.push_back(upar);

                            stacky.pop();
                            upar = stacky.top();

                        }

                        stacky.push(s[i]);
                    }
                }

                else{
//                    cout<<"?";
                    stacky.push(s[i]);
                }
            }


            else if (s[i]=='('){
                stacky.push('(');
            }

            else if(s[i]==')'){
//                cout<<"ra";
                while(stacky.top()!='('){
                    cout<<stacky.top();
                    saveit.push_back(stacky.top());

                    stacky.pop();
                }
                stacky.pop();
            }

            else{
//                cout<<"printer";
                cout<<s[i];
                saveit.push_back(s[i]);
            }
        }
    }
}

char result(vector<char> saveit){
    stack <char> bachale;
    map<char,int> mappy;
    mappy['/'] = 100;
    mappy['*'] = 100;
    mappy['+'] = 10;
    mappy['-'] = 10;

    for(int i=0;i<saveit.size();i++){
        cout<<saveit[i]<<" ";
        if(mappy[saveit[i]]==0){
            bachale.push(saveit[i]);
        }
        else if (mappy[saveit[i]]>0){
            char ope = mappy[saveit[i]];
            int first = bachale.top() - '0';
            bachale.pop();
            int second = bachale.top() - '0';
            bachale.pop();
            cout<<first<<" "<<second<<endl;
////
            if(ope=='+'){
                int answer = first+second;
                string toString = to_string(answer);
                bachale.push(toString[0]);
            }
            else if(ope=='-'){
                 int answer = first-second;
                string toString = to_string(answer);
                bachale.push(toString[0]);
            }
            else if(ope=='*'){
                int answer = first*second;
                string toString = to_string(answer);
                bachale.push(toString[0]);
            }
            else if(ope=='/'){
                int answer = first/second;
                string toString = to_string(answer);
                bachale.push(toString[0]);
            }
        }
    }
    cout<<bachale.top()<<endl;
    return bachale.top();
}



int main() {
    string s = "3+5";
    s = s + ')';


   printPostFix(s);
   cout<<endl;
   cout<<saveit.size()<<endl;
   for(int i=0;i<saveit.size();i++){
       cout<<saveit[i];
   }
   cout<<endl;
   cout<<result(saveit);
    return 0;
}