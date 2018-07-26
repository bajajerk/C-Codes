#include <iostream>
#include<math.h>
using namespace std;

class Polynomial {
    int *degCoeff;
    int capacity;

public:
    Polynomial(){
        degCoeff = new int[10];
        for(int i=0;i<10;i++){
            degCoeff[i]  = 0;
        }
        capacity = 10;
    }

    void setCoefficient(int  degree, int  coeff){
        if(degree >= capacity){
            int *expanded = new int[capacity*2];
            for(int i=0;i<capacity*2;i++){
                expanded[i] = 0;
            }
            for(int i=0;i<coeff;i++){
                expanded[i] = degCoeff[i];
            }
            capacity*=2;
        }
        degCoeff[degree] = coeff;
        return;
    }

    Polynomial operator+(Polynomial p2){
        Polynomial p3;
        for(int i=0;i<max(this->capacity, p2.capacity);i++){
            p3.setCoefficient(i , this->degCoeff[i] + p2.degCoeff[i]);
        }
        return p3;
    }


    Polynomial operator-(Polynomial p2){
        Polynomial p3;
        for(int i=0;i<max(this->capacity, p2.capacity);i++){
            p3.setCoefficient(i , this->degCoeff[i] - p2.degCoeff[i]);
        }
        return p3;
    }

    Polynomial operator*(Polynomial p2){
        Polynomial p3;
        for(int i=0;i<this->capacity;i++){
            for(int j=0;j<p2.capacity;j++){
                cout<<i<<' '<<j<<endl;
                int coeff = this->degCoeff[i]* p2.degCoeff[j];
                int degreeNet = i+j;
                if(p3.degCoeff[i+j]==0){
                    p3.setCoefficient(degreeNet, coeff);
                }
                else {
                    p3.degCoeff[i + j] = p3.degCoeff[i + j] + coeff;
                }
            }
        }
        return p3;

    }
//




    void print(){
        for(int i=0;i<this->capacity;i++){
            if(this->degCoeff[i]!=0){
                cout<<degCoeff[i]<<"x"<<i<<" ";
            }
        }
    }




};


int main()
{
    int count1,count2,choice;
    cin >> count1;

    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];

    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }

    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }

    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }

    cin >> count2;

    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];

    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }

    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }

    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }

//    first.print();
//    cout<<endl;
//    second.print();

    cin >> choice;

    Polynomial result;
    switch(choice) {
        // Add
        case 1:
            result = first + second;
            result.print();
            break;
//             Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;   case 4 : // Copy constructor
//        {
//            Polynomial third(first);
//            if (third.degCoeff == first.degCoeff) {
//                cout << "false" << endl;
//            } else {
//                cout << "true" << endl;
//            }
//            break;
//        }
////
//
//        case 4 : // Copy constructor
//        {
//            Polynomial third(first);
//            if (third.degCoeff == first.degCoeff) {
//                cout << "false" << endl;
//            } else {
//                cout << "true" << endl;
//            }
//            break;
//        }
////
//        case 5 : // Copy assignment operator
//        {
//            Polynomial fourth(first);
//            if (fourth.degCoeff == first.degCoeff) {
//                cout << "false" << endl;
//            } else {
//                cout << "true" << endl;
//            }
//            break;
//        }
    }
//



    return 0;
}

