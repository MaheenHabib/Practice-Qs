#include <iostream>
using namespace std;

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet("Alice");
    greet("Bob");
    greet("Charlie");
    return 0;
}