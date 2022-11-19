/* Function Overloading in C++

A function's signature includes the function's name and the number, order and type of its formal parameters.
Function signature must be differernt in case of function overloading.

Functions can be overloaded by using different numbers of arguments or by using different types of arguments. 

The compiler can uniquely differentiate which function is to be called during the compile-time using some best match algorithm.

C++ is a statically typed programming language because variables can store the value of a particular data type (int, char, bool, etc.)
*/


#include<iostream>
using namespace std;

class A{

    public:

        void add(){
            cout << "noooo input" << endl;
        }

        void add(int x){
            cout << "only one input: " << x << endl;
        }

        void add(int x, int y){
            cout << x + y << endl;
        }

        
};

int main(){
    A obj;
    obj.add();
    obj.add(3);
    obj.add(3,4);
}

