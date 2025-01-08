#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max (int): " << findMax(10, 20) << endl;
    cout << "Max (double): " << findMax(2.5, 1.8) << endl;
    return 0;
}