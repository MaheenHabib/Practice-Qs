#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout<<"Input the number of elements to be stored in the arrays: ";
    cin >> n;

    int arr1[n], arr2[n], merged[2 * n];
    cout << "Input elements for the first array:\n";
    for (int i = 0; i < n; i++) {
        cout << "element - " << i << " : ";
        cin >> arr1[i];
    }

    cout << "Input elements for the second array:\n";
    for (int i = 0; i < n; i++) {
        cout << "element - " << i << " : ";
        cin >> arr2[i];
    }

    for (int i = 0; i < n; i++) {
        merged[i] = arr1[i];
        merged[n + i] = arr2[i];
    }

    sort(merged, merged + 2 * n, greater<int>());

    int duplicates = 0;
    for (int i = 0; i < 2 * n - 1; i++) {
        if (merged[i] == merged[i + 1]) {
            duplicates++;
        }
    }
    cout << "The merged array in descending order is: ";
    for (int i = 0; i < 2 * n; i++) {
        cout << merged[i] << " ";
    }
    cout<<"\nTotal number of duplicate elements found in the array: "<<duplicates<<endl;

    return 0;
}