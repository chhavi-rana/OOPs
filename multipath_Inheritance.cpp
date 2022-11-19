/* Multipath Inheritance in C++

Few points to remember about the multipath inheritance are as follows:
1. A derived class with two base classes and these two base classes have one common base class is called multipath inheritance.
Also known as diamond problem.

 */

#include<iostream>
using namespace std;

class Human{
    public:
        void breathing(){
            cout << "I'm breathing." << endl;
        }

};

class Developer: public virtual Human{};
class Student: public virtual Human{};

class Chhavi: public Developer, public Student{};

int main(){
    Chhavi obj1;

    /*  Human is inherited two times in Chhavi which means object of Chhavi will contain
        two attributes of Human(Chhavi::Engineer::Human and Chhavi::Developer::Human).]
        This problem is also known as diamond problem.

    Note: virtual can be written before or after the public. Now only one copy of data/function member will be copied to class C and class B and class A becomes the virtual base class.
    Virtual base classes offer a way to save space and avoid ambiguities in class hierarchies that use multiple inheritances. 
    When a base class is specified as a virtual base, it can act as an indirect base more than once without duplication of its data members. 
    A single copy of its data members is shared by all the base classes that use virtual base. */

    obj1.breathing();       

}
