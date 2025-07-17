#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, newValue;
    cout << "Input the number of elements in the array: ";
    cin >> n;

    int arr[n + 1];
    cout << "Input the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cout << "element - " << i << " : ";
        cin >> arr[i];
    }

    cout << "Input the new value to insert: ";
    cin >> newValue;

    arr[n] = newValue; 
    sort(arr, arr + n + 1, greater<int>());

    cout << "The array in descending order is: ";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}