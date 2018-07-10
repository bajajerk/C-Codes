#include <iostream>
using namespace std;

void spiralPrint(int input[][1000], int row, int col){
    int left = 0;
    int right = col-1;
    int up = 0;
    int down = row - 1;
while(down>up && right>left ) {

    //      First move
    for (int i = left; i <= right; i++) {
        cout << input[up][i] << " ";
    }
    up++;

//            Second move , going down
    for (int i = up; i <= down; i++) {
        cout << input[i][right] << " ";
    }
    right--;

//cout<<endl<<right<<left<<endl<<input[down][right];
//            third move , going left
    for (int i = right; i >= left; i--) {
//             cout<<"init";
        cout << input[down][i] << " ";
    }
    down--;

    for (int i = down; i >= up; i--) {
        cout << input[i][left] << " ";
    }
    left++;


//cout<<endl;
//cout<<up<<endl<<down<<endl<<left<<endl<<right;
}

}
int main() {
    int r,c;
    cin>>r>>c;
    int a[r][1000];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    spiralPrint(a,r,c);

    return 0;
}