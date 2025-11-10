/*Write a C++ program to implement the exception handling with re throwing in exception.*/
#include <iostream>
using namespace std;

void testFunction(int x) {
    try {
        if (x == 0)
            throw "Division by zero!";
        else
            cout << "Result: " << 10 / x << endl;
    }
    catch (const char* msg) {
        cout << "Caught inside testFunction: " << msg << endl;
        throw; 
    }
}

int main() {
    int a;
    cout<<"Enter a non zero no.: ";
    cin>>a;
    try {
        testFunction(a);
    }
    catch (const char* msg) {
        cout << "Caught again in main: " << msg << endl;
    }

    cout << "Program continues normally..." << endl;
    return 0;
}
