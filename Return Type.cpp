#include <iostream>
using namespace std;

int getInt() { return 10; }
double getDouble() { return 3.14; }
void printMessage() { cout << "Void Function Called" << endl; }

int main() {
    cout << "Integer: " << getInt() << endl;
    cout << "Double: " << getDouble() << endl;
    printMessage();
    return 0;
}