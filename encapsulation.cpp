/* Encapsulation in C++

NOTES:
1. Encapsulation is an object oriented programming concept which talks about binding together the data and the functions that manipulates those data.
2. Encapsulation = Data Hiding + Abstraction
3. class is an example of encapsulation. If we have created some class and have data member and member function then it is an example of encapsulation.
4. Encapsulation helps in data hiding and is used to prevent direct access to data. In order to access that data, public methods are exposed, and the user can change and access private members of the class only by using those public methods.

 */

#include<iostream>
using namespace std;

class Employee{
    int salary;

    public:

        void setSalary(int val){
            salary = val;
        }

        int getSalary(){
            return salary;
        }

};

int main(){

    Employee Naruto;
    Naruto.setSalary(1500000);
    cout << Naruto.getSalary() << endl;
    return 0;

}

/* 

Data hiding is a way of restricting the access of our data members by hiding the implementation details. Encapsulation also provides a way for data hiding.
We can use access modifiers to achieve data hiding in C++.  

*/