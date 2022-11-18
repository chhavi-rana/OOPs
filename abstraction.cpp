/* 
Abstraction in C++

Abstraction is the process of only showing the necessary details to the user and hiding the other details 
in the background.

A mobile user uses various mobile phone functionalities, such as calls, SMS, etc. 
But the actual implementation details of these functions are hidden from the mobile user. 
This is an example of abstraction.

There are two ways of achieving data abstraction in C++:

1. Abstraction In Header Files
Abstraction can also be achieved using header files as we hide the function's implementation in header files. 
 Sort(), for example, is used to sort an array, a list, or a collection of items, and we know that if we give a container to sort, it will sort it, 
 but we don't know which sorting algorithm it uses to sort that container.

2. Abstraction Using Classes
Classes can be used to implement Abstraction in C++. We may group data members and member functions into classes using the available access specifiers.
A Class can choose which data members are visible to the outside world and which are hidden. 

*/

#include<iostream>
using namespace std;

class Car{
    private:
        bool start, stop;

    public:
        Car(){
            start = false;
            stop = true;
        }

        void pushStart(){
            if(!start){
                start = true;
                stop = false;
                cout << "Car has been started." << endl;
            }else{
                cout << "Car is already in start mode." << endl;
            }
        }

        void pushStop(){
            if(!stop){
                stop = true;
                start = false;
                cout << "Car has been stopped." << endl;
            }else{
                cout << "Car is already in stop mode" << endl;
            }
        }
};

int main(){

    Car tataNexon;
    tataNexon.pushStart();  // just need to call these function, no worries about its implementation --> abstraction(hides implementation)
    tataNexon.pushStop();

    return 0;
}