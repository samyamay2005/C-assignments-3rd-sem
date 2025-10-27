/*Write a C++ program to demonstrate the execution of constructor and destructor.*/
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called!" << endl;
    }

    ~Demo() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    cout << "Creating first object..." << endl;
    Demo obj1;

    cout << "Creating second object..." << endl;
    Demo obj2;

    cout << "Exiting main..." << endl;
    return 0;
}
