#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of matrix
    cout << "Enter the size of matrix (n for n x n): ";
    cin >> n;

    int matrix[n][n], transpose[n][n];

    // Input matrix elements
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate transpose
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print transpose matrix
    cout << "\nTranspose of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
