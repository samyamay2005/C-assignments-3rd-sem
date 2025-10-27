/*Write a C++ Program to implement Method Overloading.*/
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 2 integers (5 + 10): " << calc.add(5, 10) << endl;
    cout << "Sum of 2 doubles (3.5 + 4.2): " << calc.add(3.5, 4.2) << endl;
    cout << "Sum of 3 integers (1 + 2 + 3): " << calc.add(1, 2, 3) << endl;

    return 0;
}
