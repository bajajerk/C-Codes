#include <iostream>
#include<string>
#include<map>
using namespace std;



int main() {
       char s[5] = {'a' , 'b' , 's' , 'p', 'z'};
        char key;
        cin>>key;

        int i =0;
        while(s[i]!='\0'){
                int a = key+0;
                cout<<s[i]<<endl;
                int check = s[i]+a-96;
                char newCharacter = s[i] + a;
                int asCIIofNew = newCharacter+0;
                char z = 'z';
                int asCiiOfZ = z ;
                cout<<asCIIofNew<<endl;

                 if(asCIIofNew <= asCiiOfZ)
                {
                        s[i] = s[i]+a;
                }
                else{
                        s[i] = s[i]+a-26;
                }
                cout<<endl<<"After execution  "<<s[i]<<endl;
                i++;
        }
        cout<<s[i-1];
        int j=0;
        while(s[j]!='\0'){
                cout<<s[j];
                j++;
        }




}