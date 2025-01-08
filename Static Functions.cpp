#include <iostream>
using namespace std;

class Counter {
    static int count;
public:
    Counter() { count++; }
    static void displayCount() {
        cout << "Count: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    Counter::displayCount();
    return 0;
}