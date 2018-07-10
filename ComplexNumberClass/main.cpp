#include <iostream>
using namespace std;
class ComplexNumbers {
private:
    int real;
    int imaginary;
public:
    ComplexNumbers(int real,int img){
        this->real = real;
        this->imaginary = img;
    }

    void print(){
        cout<<this->real<<" ";
        if(imaginary>=0){
            cout<<"+ i";
        }
        else{
            cout<<"- i";
        }
        cout<<abs(this->imaginary)<<endl;
    }

    void plus(ComplexNumbers const &c2){
        int new_real = real + c2.real;
        int new_imaginary = imaginary + c2.imaginary;
        real  = new_real;
        imaginary = new_imaginary;
    }

    void multiply(ComplexNumbers const &c2){
        int new_real  = real*c2.real - imaginary*c2.imaginary;
        int new_imaginary = imaginary*c2.real + real*c2.imaginary;
        real  = new_real;
        imaginary = new_imaginary;
    }
};


int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);


    int choice;
    cin >> choice;

    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }

}

