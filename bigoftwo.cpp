/*Write a C++ Program to find Maximum out of Two Numbers using friend function.*/
#include <iostream>
using namespace std;

class B;  

class A {
    int num1;
public:
    void setData(int n) {
        num1 = n;
    }
    friend void findMax(A, B);
};

class B {
    int num2;
public:
    void setData(int n) {
        num2 = n;
    }
    friend void findMax(A, B);
};

void findMax(A a, B b) {
    if (a.num1 > b.num2)
        cout << "Maximum number is: " << a.num1 << endl;
    else
        cout << "Maximum number is: " << b.num2 << endl;
}

int main() {
    A objA;
    B objB;

    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    objA.setData(x);
    objB.setData(y);

    findMax(objA, objB);

    return 0;
}
