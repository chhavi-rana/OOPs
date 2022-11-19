/* Inhertiance in C++

Inheritance is a process in which one object acquires all the properties and
behaviors of its parent object automatically. In such a way, you can reuse,
extend or modify the attributes and behaviors which are defined in other
classes.

C++ Syntax :
class derived_class :: visibility-mode base_class;
visibility-modes = {private, protected, public}

TERMINOLOGY: Base/Derived  OR  Parent/Child

Types of Inheritance :

1. Single inheritance : When one class inherits another class, it is known
as single level inheritance

2. Multiple inheritance : Multiple inheritance is the process of deriving
a new class that inherits the attributes from two or more classes.

3. Hierarchical inheritance : Hierarchical inheritance is defined as the
process of deriving more than one class from a base class.

4. Multilevel inheritance : Multilevel inheritance is a process of deriving a
class from another derived class.

5. Hybrid inheritance : Hybrid inheritance is a combination of
simple, multiple inheritance and hierarchical inheritance.

6. Multipath 
   A derived class with two base classes and these two base classes have one common base class is called multipath inheritance.
   (Diamond Problem)

---------------------------------------------------------------------------------------------------------------|
Base class member   |                            Type of Inheritence                                           |
access specifier    |                                                                                          |
--------------------|------------------------------------------------------------------------------------------|
                    |       Public	               |   Protected	            |      Private                 |
Public	            |       Public	               |   Protected	            |      Private                 |
Protected	        |       Protected	           |   Protected	            |      Private                 |
Private	            |       Not accessible(Hidden) |   Not accessible(Hidden)	|      Not accessible(Hidden)  |
----------------------------------------------------------------------------------------------------------------

 */
#include<iostream>
using namespace std;

class Base{
    string x = "Inside parent's private." ;

    protected:
        string z = "Inside parent's protected." ;

    public:
        string y = "Inside parent's public." ;
};

class Child : public  Base{
    public:
        void func(){
            cout << "The string inside parent class is: " + z << endl;    // Using parent class protected member.
        }
};

int main(){
    Child obj;
    // cout << obj.x << endl;              -->  error: 'std::__cxx11::string Base::x' is private within this context
    cout << obj.y << endl;
    // cout << obj.z << endl;                 --> error: 'int Base::z' is protected within this context
    // We can access protected members of public class inside derived(child) class.
    obj.func();
}