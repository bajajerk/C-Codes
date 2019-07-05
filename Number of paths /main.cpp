#include <iostream>
using namespace std;

int ans = 0;
void patterPrinter(string output[][10],string s, int x, int y, int targetX, int targetY){
    s = s + output[x][y];

    if(x==targetX && y==targetY){
//        cout<<s<<endl;
        ans++;
        return;
    }
    else if(x>targetX || y>targetY){
        return;
    }
    patterPrinter(output,s,x+1,y,targetX,targetY);
    patterPrinter(output,s,x,y+1,targetX,targetY);

}
int main() {
    int t;
    cin>>t;
    while(t--){
        int xCor,yCor;
        cin>>xCor>>yCor;
        string output[10][10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                output[i][j] = "1";
            }
        }
        ans = 0;
        patterPrinter(output,"",0,0,xCor-1,yCor-1);
        cout<<ans<<endl;

    }
    return 0;
}