#include <iostream>
#include<string.h>
#include<set>
using namespace std;

//Given a string S, find the largest substring with no repetition i.e. largest substring which contain all unique characters.
//Input Format :
//String S
//Output Format :
//Largest unique substring
//        Constraints :
//1 <= Length os String S <= 10^3
//Sample Input:
//abcdabceb
//        Sample Output:
//dabce



// input - given string
// output - output string that contains largest unique substring

#include<string.h>
#include<set>
using namespace std;
void findLargestUniqueSubstring(char input[], char output[]){
    int n = strlen(input);
    int lengther[n];
    int startIndex;
    int maxxy = -999;
    for(int i=0;i<n;i++){
        set<char> s;
        int count = 1;
        s.insert(input[i]);
        for(int j=i+1;j<n;j++){
            int orignalSize = s.size();
            s.insert(input[j]);
            if(s.size()>orignalSize){
                count++;
            }
            else{
                break;
            }
        }
//        cout<<count<<endl;
        if(count>maxxy){
            maxxy =count;
            startIndex = i;
        }

    }
//    cout<<endl<<endl<<endl;
//    cout<<maxxy<<endl;
//    cout<<startIndex;
    int r=0;
    for(int m=startIndex;m<startIndex+maxxy;m++){
        output[r] = input[m];
        r++;
    }
    output[r] = '\0';
}

int main() {
    char a[10] ={'a' , 'b' , 'c' ,'d' ,'a' , 'b' , 'c' ,'e', 'b','\0' };
    char b[21];
    findLargestUniqueSubstring(a,b);
    int i=0;
    while (b[i]!='\0'){
        cout<<b[i];
        i++;
    }
    return 0;
}