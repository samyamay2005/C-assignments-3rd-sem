/*Write a C++ program to implement Shallow Copy and deep copy.*/
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1("Samyamay");
    Student s2 = s1; 

    s1.display();
    s2.display();

    cout << "\nChanging name of s1..." << endl;
    s1.name = "Bhattacharjee";

    s1.display();
    s2.display(); 

    Student s3("Samyamay");
    Student s4(s3.name);  // explicitly creating a new copy of the name

    s3.display();
    s4.display();

    cout << "\nChanging name of s3..." << endl;
    s3.name = "Bhattacharjee";

    s3.display();
    s4.display(); 

    return 0;
}
