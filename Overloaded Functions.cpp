#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Integer Addition: " << add(3, 5) << endl;
    cout << "Double Addition: " << add(2.5, 3.5) << endl;
    return 0;
}