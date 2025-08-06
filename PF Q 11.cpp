#include <iostream>
#include <climits>
using namespace std;

int main() {
    int matrix[3][3];
    bool isIdentity = true;
    int minVal = INT_MAX, maxVal = INT_MIN;

    cout << "Enter elements of the 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "element - [" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
            if (i == j && matrix[i][j] != 1) isIdentity = false;
            if (i != j && matrix[i][j] != 0) isIdentity = false;

            if (matrix[i][j] < minVal) minVal = matrix[i][j];
            if (matrix[i][j] > maxVal) maxVal = matrix[i][j];
        }
    }

    if (isIdentity)
        cout << "The matrix is an identity matrix.\n";
    else
        cout << "The matrix is not an identity matrix.\n";

    cout << "Minimum value in the matrix: " << minVal << endl;
    cout << "Maximum value in the matrix: " << maxVal << endl;

    return 0;
}