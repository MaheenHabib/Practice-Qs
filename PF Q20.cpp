#include <iostream>
#include <cmath>
using namespace std;

// UDF-2: Calculate square root
double squareRoot(double num) {
    return sqrt(num);
}

// UDF-3: Calculate the product of square root values
double product(double a, double b, double c) {
    return a * b * c;
}

// UDF-1: Calculate sum of squares and call other functions
void sumOfSquare(double a, double b, double c) {
    double sqrtA = squareRoot(a);
    double sqrtB = squareRoot(b);
    double sqrtC = squareRoot(c);

    double prod = product(sqrtA, sqrtB, sqrtC);
    cout << "The product of the square roots is: " << prod << endl;
}

int main() {
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    sumOfSquare(a, b, c);
    return 0;
}