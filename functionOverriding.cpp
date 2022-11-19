/* 

Function overriding in c++

In case of function overriding, parent and child classes both contain the same function with a
different definition. Hence, the childclass overrides the method of the parent class.
 */

#include<iostream>
using namespace std;

class Base{
    public:

        // virtual function (re-defined in the derived class)
        virtual void print(){
            cout << "Inside base class" << endl;
        }

        void display(){
            cout << "Inside base class" << endl;
        }
};

class Derived: public Base{
    void print(){
        cout << "Inside derived class" << endl;
    }

    void display(){
        cout << "Inside derived class" << endl;
    }
};

int main(){
    Base *ptr;
    Derived d;

    ptr = &d;

    // Non-virtual function, binded at compile time
    ptr->display();

    // virtual function, binded at runtime
    ptr->print();

}

/* 

Virtual Function : A virtual function is used to replace the
implementation provided by the base class. The replacement is always
called whenever the object in question is actually of the derived class, even
if the object is accessed by a base pointer rather than a derived pointer.

1. A virtual function is a member function which is present in the
base class and redefined by the derived class.

2. When we use the same function name in both base and derived
class, the function in base class is declared with a keyword
virtual.

3. When the function is made virtual, then C++ determines at run-time
which function is to be called based on the type of the object pointed
by the base class pointer. Thus, by making the base class pointer to point to
different objects, we can execute different versions of the virtual
functions. 

*/