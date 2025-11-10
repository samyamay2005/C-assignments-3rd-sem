/*Write a C++ program to implement the exception handling with multiple catch statements*/
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter an index (0 to 4): ";
    cin >> index;

    try {
        if (index < 0)
            throw "Negative index not allowed!";
        else if (index >= 5)
            throw index; 
        else
            cout << "Value at index " << index << " is " << arr[index] << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }
    catch (int i) {
        cout << "Exception caught: Array index out of bounds (" << i << ")" << endl;
    }
    catch (...) {
        cout << "Unknown exception caught!" << endl;
    }

    cout << "Program continues safely..." << endl;
    return 0;
}
