#include <iostream>
using namespace std;

void greet() {
    cout << "Hello, World!" << endl;
}

int main() {
    void (*funcPtr)() = greet;
    funcPtr();
    return 0;
}