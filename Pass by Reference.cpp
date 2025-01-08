#include <iostream>
using namespace std;

void modify(int &x) {
    x += 10;
}

int main() {
    int num = 5;
    modify(num);
    cout << "Modified Value: " << num << endl;
    return 0;
}