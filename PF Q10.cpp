#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Input Rows and Columns of the matrices: ";
    cin >> rows >> cols;

    int mat1[rows][cols], mat2[rows][cols], sum[rows][cols];

    cout << "Input elements in the first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "element - [" << i << "][" << j << "] : ";
            cin >> mat1[i][j];
        }
    }

    cout << "Input elements in the second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "element - [" << i << "][" << j << "] : ";
            cin >> mat2[i][j];
        }
    }

    // Check equality and calculate sum
    bool isEqual = true;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                isEqual = false;
            }
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    cout << "The first matrix is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The second matrix is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

    if (isEqual) {
        cout << "The matrices are equal.\n";
    } else {
        cout << "The matrices are not equal.\n";
    }

    cout << "The sum of the matrices is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}