#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input with validation
    do {
        cout << "Enter number of rows (max 3): ";
        cin >> rows;
    } while (rows > 3 || rows <= 0);

    do {
        cout << "Enter number of columns (max 3): ";
        cin >> cols;
    } while (cols > 3 || cols <= 0);

    // Dynamic allocation of 2D array
    double** arr = new double*[rows];

    for (int i = 0; i < rows; i++) {
        arr[i] = new double[cols];
    }

    // Assign values using nested loops
    cout << "\nEnter values for the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Output the array
    cout << "\nArray values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];  // delete each row
    }
    delete[] arr;  // delete array of pointers

    return 0;
}