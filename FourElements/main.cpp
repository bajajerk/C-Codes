#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

bool findFourElements (int arr[], int n, int X)
{
    // Store sums of all pairs in a hash table
    unordered_map<int, pair<int, int>> mp;
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            mp[arr[i] + arr[j]] = {i, j};

    // Traverse through all pairs and search
    // for X - (current pair sum).
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int sum = arr[i] + arr[j];

            // If X - sum is present in hash table,
            if (mp.find(X - sum) != mp.end())
            {

                // Making sure that all elements are
                // distinct array elements and an element
                // is not considered more than once.
                pair<int, int> p = mp[X - sum];
                if (p.first != i && p.first != j &&
                    p.second != i && p.second != j)
                {

                    return true;
                }
            }
        }
    }
    return false;
}


int main() {
    int t;
    cin>>t;
    for(int r=0;r<t;r++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int element;
        cin>>element;

        bool ans = findFourElements(a,n,element);
        cout<<ans<<endl;
//        if(ans){
//            cout<<"1"<<endl;
//        }
//        else{
//            cout<<"0"<<endl;
//        }
    }

    return 0;
}