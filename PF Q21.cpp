#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    float gpa;
    int marks[7];
};

void printStudentData(Student s1, Student s2) {
    cout << "Student 1 Data:\n";
    cout << "ID: " << s1.id << ", Name: " << s1.name << ", GPA: " << s1.gpa << "\nMarks: ";
    for (int i = 0; i < 7; i++) cout << s1.marks[i] << " ";
    cout << "\n\n";

    cout << "Student 2 Data:\n";
    cout << "ID: " << s2.id << ", Name: " << s2.name << ", GPA: " << s2.gpa << "\nMarks: ";
    for (int i = 0; i < 7; i++) cout << s2.marks[i] << " ";
    cout << "\n";
}

int main() {
    Student globalStudent = {1, "Global Student", 3.8, {90, 85, 88, 92, 80, 84, 89}};
    Student localStudent;
    
    cout << "Enter details for the local student:\n";
    cout << "ID: "; cin >> localStudent.id;
    cin.ignore();
    cout << "Name: "; getline(cin, localStudent.name);
    cout << "GPA: "; cin >> localStudent.gpa;
    cout << "Enter 7 marks: ";
    for (int i = 0; i < 7; i++) cin >> localStudent.marks[i];

    printStudentData(globalStudent, localStudent);
    return 0;
}