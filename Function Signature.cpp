#include <iostream>
using namespace std;

void display(int x) {
    cout << "Integer: " << x << endl;
}

void display(double x) {
    cout << "Double: " << x << endl;
}

int main() {
    display(5);
    display(3.14);
    return 0;
}