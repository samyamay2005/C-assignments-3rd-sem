#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int maxCount = 0;
    int count;
    string result = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ' || str[i] == '\0') continue;

        count = 1;

        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '\0'; // mark as counted
            }
        }

        if (count > maxCount) {
            maxCount = count;
            result = str[i]; // reset result string
        }
        else if (count == maxCount) {
            result += str[i]; // append tied character
        }
    }

    cout << "Maximum occurring character(s): ";
    for (char c : result)
        cout << "'" << c << "' ";
    cout << "occurred " << maxCount << " times." << endl;

    return 0;
}
