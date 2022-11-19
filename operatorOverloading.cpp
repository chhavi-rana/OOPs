/* 
Operator Overloading in C++

In C++, we can change the way operators work for user-defined types like objects and structures. 
This is known as operator overloading. For example,

It is a compile-time polymorphism using which a special meaning can be provided to 
an operator for a given user-defined data type.

Following operators are prohibited from being overloaded in C++:

a)  ..(dot operator)
b)  :: (Scope resolution operator)
c)  ?: (Ternary operator)
d)  sizeof 

*/

#include<iostream>
using namespace std;

class complexNumbers{
    int real, imaginary;

    public:
        complexNumbers(int real, int imag){
            this->real = real;
            this->imaginary = imag;
        }

        complexNumbers operator+(complexNumbers &obj){
            complexNumbers result(0,0);
            result.real = (this->real + obj.real);
            result.imaginary = (this->imaginary) + (obj.imaginary) ;
            return result;
        }

        void print(){
            cout << real << " + " << "i" << imaginary << endl;
        }
};

int main(){
    
    complexNumbers c1(10, 5), c2(2, 4);
    complexNumbers c3 = c1 + c2;
    c3.print();

}