#include <iostream>
using namespace std;

// Function Declaration
int add(int a, int b);

int main() {
    cout << "Sum: " << add(3, 7) << endl;
    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}