#include <iostream>
#include<map>
#include<vector>
using namespace std;

//long maxPathSum(int a[], int b[], int n1, int n2)
//    {
//        map<int ,int> mappy;
//        vector<int> v;
//        for(int i=0;i<n1;i++){
//            mappy[a[i]]++;
//        }
//        for(int i=0;i<n2;i++){
//            if(mappy[b[i]]>=1){
//                v.push_back(b[i]);
//            }
//        }
//    //    cout<<v.size()<<endl;
//    //    cout<<"element is  "<<v[0]<<endl;
//
//
//        int k = 0;
//        int l = 0;
//        int vectorIndex = 0;
//        long finalSum = 0;
//
//        while(k<n1 && l<n2 && vectorIndex<v.size()){
//            long upperSum = 0;
//            long lowerSum = 0;
//            int element  = v[vectorIndex];
//            while(a[k]!=element){
//                upperSum = upperSum + a[k];
//                k++;
//            }
//    //        cout<<"Upper   " <<upperSum<<endl;
//            upperSum = upperSum + element;
//    //        cout<<"Upper   " <<upperSum<<endl;
//
//            while(b[l]!=element){
//                lowerSum = lowerSum + b[l];
//                l++;
//            }
//            lowerSum = lowerSum + element;
//    //        cout<<"Lsum     "<<lowerSum<<endl;
//
//            finalSum = finalSum + max(lowerSum,upperSum);
//    //        cout<<finalSum<<endl;
//            l++;
//            k++;
//            vectorIndex++;
//        }
//    //    cout<<k <<"    "<<l<<endl;
//        int kSum = 0;
//        while(k!=n1){
//            kSum = kSum + a[k];
//            k++;
//        }
//    //    cout<<"KSUM   "<<kSum<<endl;
//
//        int lSum = 0;
//        while(l!=n2){
//            lSum = lSum + b[l];
//            l++;
//        }
//    //    cout<<"lSUM   "<<lSum<<endl;
//
//        int maxxer = max(kSum,lSum);
//        return finalSum + maxxer ;
//    }

long maxPathSum(int a[], int b[], int n1, int n2){
    int i=0;
    int j = 0;
    long sum = 0;
    int uSum = 0;
    int lSum = 0;
    int common = 0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            uSum+=a[i];
            i++;
        }
        else if(a[i]>b[j]){
            lSum+=b[j];
            j++;
        }
        else if (a[i]==b[j]){
            common++;
            sum+=max(lSum,uSum);
            sum+=a[i];
            uSum = 0;
            lSum = 0;
            i++;
            j++;
        }
    }
//    if(i==n1-1 || j==n2-1){
//        return sum;
//    }
    if(common==0){
        int totalSumUp = 0;
        int totalSumDown = 0;
        for(int t = 0;t<n1;t++){
            totalSumUp +=a[t];
        }

        for(int t = 0;t<n2;t++){
            totalSumDown +=b[t];
        }
        return max(totalSumDown,totalSumUp);
    }
        int iSum = 0;
        while(i!=n1){
            iSum = iSum + a[i];
            i++;
        }
        int jSum = 0;
        while(j!=n2){
            jSum = jSum + b[j];
            j++;
        }
        int maxxer = max(iSum,jSum);
        cout<<sum<<endl;

        return sum + maxxer ;
}


int main() {

    int N,M;
    cin>>N>>M;
    int a[N],b[M];
    for(int i=0;i<N;i++)
        cin>>a[i];
    for(int i=0;i<M;i++)
        cin>>b[i];
    int result = maxPathSum(a,b,N,M);
    cout<<result<<endl;
    return 0;
}