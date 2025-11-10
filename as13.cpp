/*Write a C++ program illustrating the use of Abstract class & Pure virtual functions in class*/
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class 1
class Rectangle : public Shape {
    float length, breadth;

public:
    void getData() {
        cout << "Enter length and breadth of rectangle: ";
        cin >> length ;
        cin >> breadth ;
    }

    void area() {
        cout << "Area of Rectangle = " << (length * breadth) << endl;
    }
};

// Derived class 2
class Circle : public Shape {
    float radius;

public:
    void getData() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void area() {
        cout << "Area of Circle = " << (3.14 * radius * radius) << endl;
    }
};

int main() {
    Shape* s; // base class pointer

    Rectangle r;
    Circle c;

    cout << "--- Rectangle ---" << endl;
    s = &r;
    r.getData();
    s->area();

    cout << "\n--- Circle ---" << endl;
    s = &c;
    c.getData();
    s->area();

    return 0;
}
