#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minSum = INT_MAX, num1, num2;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = abs(arr[i] + arr[j]);
            if (sum < minSum) {
                minSum = sum;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    cout << "The pair of elements whose sum is closest to zero are: [" << num1 << ", " << num2 << "]\n";
    return 0;
}