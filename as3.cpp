/*Write a C++ Program to Print Maximum Occurring Character in a String.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    char maxChar;
    int maxCount = 0;

    for (int i = 0; i < str.length(); i++) {
        int count = 1;

        
        if (str[i] == ' ' || str[i] == '\0') 
            continue;

        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '\0'; 
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character: '" << maxChar 
         << "' occurred " << maxCount << " times." << endl;

    return 0;
}
