#include <iostream>
#include <map>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    map<char, int> frequency;
    for (char c : str) {
        frequency[c]++;
    }

    cout << "The count of each character in the string is:\n";
    for (auto pair : frequency) {
        cout << pair.first << "\t" << pair.second << endl;
    }

    return 0;
}