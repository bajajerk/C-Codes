#include<iostream>
using namespace std;
class _stack{
    int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        _stack *a = new _stack();
        while(q--){
            int qt;
            cin>>qt;
            if(qt==1)
            {
                //push
                int att;
                cin>>att;
                a->push(att);
            }
            else if(qt==2)
            {
                //pop
                cout<<a->pop()<<" ";
            }
            else if(qt==3)
            {
                //getMin
                cout<<a->getMin()<<" ";
            }
        }
        cout<<endl;
    }
}

}