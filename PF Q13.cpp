#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowels = 0, consonants = 0, uppercase = 0, lowercase = 0, specialChars = 0, digits = 0, words = 1;

    for (char c : str) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
                vowels++;
            else
                consonants++;

            if (isupper(c))
                uppercase++;
            else
                lowercase++;
        } else if (isdigit(c)) {
            digits++;
        } else if (isspace(c)) {
            words++;
        } else {
            specialChars++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Uppercase: " << uppercase << endl;
    cout << "Lowercase: " << lowercase << endl;
    cout << "Special characters: " << specialChars << endl;
    cout << "Words: " << words << endl;
    cout << "Digits: " << digits << endl;

    return 0;
}