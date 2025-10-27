/*Write a C++ Program which creates & uses array of object of a class (for eg. implementing
the list of Managers of a Company having details such as Name, Age, etc...).*/

#include <iostream>
using namespace std;

class Manager {
    char name[50];
    int age;
    float salary;

public:
    void getData() {
        cout << "Enter Manager Name: ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of managers: ";
    cin >> n;

    Manager m[n];  

    for(int i = 0; i < n; i++) {
        cout << "\nEnter details of Manager " << i + 1 << ":\n";
        m[i].getData();
    }

    cout << "\nList of Managers\n";
    for(int i = 0; i < n; i++) {
        cout << "\nManager " << i + 1 << " Details:\n";
        m[i].displayData();
    }

    return 0;
}
