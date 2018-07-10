#include <iostream>
#include<math.h>
using namespace std;


double calculteDistance(double x1,double y1, double x2, double y2, double fNew){
    double x = pow(x1-x2,2);
    double y = pow(y1-y2,2);
    double dist = sqrt(x+y);
    double ans = fNew-dist;
    return ans;
}

double bestRoute(double x[],double y[],double f[] , double n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return f[1]+calculteDistance(x[0],y[0],x[1],y[1],f[1]);
    }

    int maxxi = -999;
    for(int i=1;i<n;i++){

    }
    double takeNext  = f[0]+ calculteDistance(x[0],y[0],x[1],y[1],f[1])+ bestRoute(x+1,y+1,f+1,n-1);


}

int main() {
    int n;
    cin>>n;
    double x[n], y[n] , f[n];

    for(int i=0;i<n;i++){
//        cout<<"hi"<<1;
        cin>>x[i]>>y[i]>>f[i];
    }

    double ns = bestRoute(x,y,f,n);
    cout<<ns;

}