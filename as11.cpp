/*Write a C++ Program to design a student class representing student roll no. and a test class
(derived class of student) representing the scores of the student in various subjects and
sports class representing the score in sports. The sports and test class should be inherited
by a result class having the functionality to add the scores and display the final result for a
student.*/
#include <iostream>
using namespace std;


class Student {
protected:
    int rollNo;

public:
    void getRollNo() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void putRollNo() {
        cout << "Roll Number: " << rollNo << endl;
    }
};


class Test : public Student {
protected:
    float sub1, sub2;

public:
    void getMarks() {
        cout << "Enter marks for two subjects: ";
        cin >> sub1 >> sub2;
    }

    void putMarks() {
        cout << "Marks in Subject 1: " << sub1 << endl;
        cout << "Marks in Subject 2: " << sub2 << endl;
    }
};


class Sports {
protected:
    float score;

public:
    void getScore() {
        cout << "Enter sports score: ";
        cin >> score;
    }

    void putScore() {
        cout << "Sports Score: " << score << endl;
    }
};


class Result : public Test, public Sports {
    float total;

public:
    void display() {
        total = sub1 + sub2 + score;
        putRollNo();
        putMarks();
        putScore();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result r;
    r.getRollNo();
    r.getMarks();
    r.getScore();
    cout << "\nFinal Result" << endl;
    r.display();

    return 0;
}
