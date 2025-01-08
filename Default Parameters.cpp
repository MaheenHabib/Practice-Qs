#include <iostream>
using namespace std;

int add(int a, int b = 5) {
    return a + b;
}

int main() {
    cout << "Sum: " << add(10) << endl;
    cout << "Sum: " << add(10, 20) << endl;
    return 0;
}