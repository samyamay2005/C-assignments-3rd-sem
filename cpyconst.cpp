/*Write a C++ Program using copy constructor to copy data of an object to another object.*/
#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    Student(string n, int a) {
        name = n;
        age = a;
    }

    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Samyamay", 19);
    cout << "Original Object:\n";
    s1.display();

    Student s2 = s1;
    cout << "\nCopied Object:\n";
    s2.display();

    return 0;
}
