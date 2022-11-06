#include<iostream>
using namespace std;

class ComplexNumbers {
    private :
    int real;
    int img;
    
    public :
    ComplexNumbers(int real, int img){
        this -> real = real;
        this -> img = img;
    }
    
    void plus(ComplexNumbers const &c2){
        int r = real + c2.real;
        int i = img + c2.img;
        real = r;
        img = i;
    }
    void multiply(ComplexNumbers const &c2){
        int r = (real * c2.real) - (img * c2.img);
        int i = (real * c2.img) + (img * c2.real);
        real = r;
        img = i;
    }
    void print(){
        cout << real << " + i" << img;
    }
    
};