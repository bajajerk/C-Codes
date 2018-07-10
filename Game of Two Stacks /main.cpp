#include <iostream>
#include<vector>
using namespace std;


int twoStacks(int x, vector<int> a, vector<int> b) {
    int sumUptill = 0;
    int count  = 0;
    int i = 0;
    int j = 0;
    int n1 = a.size();
    int n2 = b.size();

    while(sumUptill<=x){
        if(i<n1 && j<n2){
            if(a[i]<b[j]){
                sumUptill+=a[i];
                if(sumUptill>x){
                    break;
                }
                i++;
                count++;
            }
            else{
                sumUptill+=b[j];
                if(sumUptill>x){
                    break;
                }
                j++;
                count++;

            }
        }

//        First stack finished
        else if(i>=n1){
            sumUptill+=b[j];
            if(sumUptill>x){
                break;
            }
            else{
                j++;
                count++;
            }

        }

        else if(j>=n2){
            sumUptill+=a[i];
            if(sumUptill>x){
                break;
            }
            else{
                i++;
                count++;
            }

        }



    }
    return count;

}

int main() {
    int n1,n2,x;
    cin>>n1>>n2>>x;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    for(int i=0;i<n1;i++){
        int m;
        cin>>m;
        v1.push_back(m);
    }
    for(int i=0;i<n2;i++){
        int m;
        cin>>m;
        v2.push_back(m);
    }

    cout<<twoStacks(x,v1,v2);
    return 0;
}