#include <iostream>
using namespace std;

void modify(int x) {
    x += 10;
    cout << "Inside Function: " << x << endl;
}

int main() {
    int num = 5;
    modify(num);
    cout << "Outside Function: " << num << endl;
    return 0;
}