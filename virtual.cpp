/*Write a C++ program illustrating the use of virtual functions in class*/
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "This is the Base class display function." << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "This is the Derived class display function." << endl;
    }
};

int main() {
    Base b;
    Derived d;

    Base* ptr;

    ptr = &b;
    ptr->display();  // Calls Base::display()

    ptr = &d;
    ptr->display();  // Calls Derived::display() due to virtual function

    return 0;
}
