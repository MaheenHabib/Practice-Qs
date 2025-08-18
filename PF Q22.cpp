#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    float gpa, percentage;
    int marks[5];
};

int calculateTotal(Student s) {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += s.marks[i];
    }
    return total;
}

int main() {
    Student s;
    cout << "Enter student details:\n";
    cout << "ID: "; cin >> s.id;
    cin.ignore();
    cout << "Name: "; getline(cin, s.name);
    cout << "GPA: "; cin >> s.gpa;
    cout << "Percentage: "; cin >> s.percentage;
    cout << "Enter 5 marks: ";
    for (int i = 0; i < 5; i++) cin >> s.marks[i];

    int total = calculateTotal(s);
    cout << "Total marks of the student: " << total << endl;
    return 0;
}