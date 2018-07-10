#include <iostream>
        #include<cstring>
        using namespace std;

        int generatePermutations(string s,string output[]){
            if(s.size()==0){
                output[0] = "";
                return 1;
            }
            string smallOutput[10000];
            int smallSize = generatePermutations(s.substr(1), smallOutput);
            int k = 0;
            for(int i = 0; i < smallSize; i++) {
                for(int j = 0; j <=smallOutput[i].length(); j++){
                    output[k++] = smallOutput[i].substr(0,j) + s[0] + smallOutput[i].substr(j); }
            }
            return k;
        }



        long numberOfNumbersGreater(long num){
            string s = to_string(num);
            string output[9999];
            int generatedCount = generatePermutations(s,output);
            int a[generatedCount];
            for(int i=  0 ; i<generatedCount;i++){
                a[i] = stoi(output[i]);
            }
            int count = 0;
            for(int i=  0 ; i<generatedCount;i++){
                if(a[i]>num){
                    count++;
                }
            }
            return count;
        }



int main() {
cout<<numberOfNumbersGreater(123);
    return 0;
}