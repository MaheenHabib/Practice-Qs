#include <iostream>
using namespace std;

void solve(int num) {
    cout << "Table of " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout <<num<<" x "<<i<<" = "<<num * i <<endl;
    }
}
void solve(float a, float b, float c) {
    cout<<"Sum of squares: "<<(a * a)+(b * b)+(c * c)<<endl;
}

float solve(int a, int b, int c, int d) {
    return (a + b + c + d) / 4.0;
}

template <typename T>
void solve(T a, T b, T c) {
    cout<<"Sum of squares (template): "<<(a * a)+(b * b)+(c * c)<<endl;
}

int main() {
    solve(5);
    solve(2.0f, 3.0f, 4.0f);
    cout << "Average: "<<solve(10, 20, 30, 40)<<endl;

    solve(3, 4, 5); 
    solve(1.1f, 2.2f, 3.3f); 

    return 0;
}