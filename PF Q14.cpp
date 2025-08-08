#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    if (str1 == str2)
        cout << "The strings are similar.\n";
    else
        cout << "The strings are not similar.\n";

    reverseString(str1);
    reverseString(str2);

    cout << "Reversed first string: " << str1 << endl;
    cout << "Reversed second string: " << str2 << endl;

    return 0;
}