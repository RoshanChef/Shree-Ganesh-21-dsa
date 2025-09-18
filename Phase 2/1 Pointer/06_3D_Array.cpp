#include <iostream>
using namespace std;

int main() {
    // size of 3D array
    int n;
    cout << "Enter size (n): ";
    cin >> n;

    // allocate 3D array dynamically
    int ***ar = new int**[n];
    for (int i = 0; i < n; i++) {
        ar[i] = new int*[n];
        for (int j = 0; j < n; j++) {
            ar[i][j] = new int[n];
        }
    }

    // input values
    cout << "Enter " << n * n * n << " elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cin >> ar[i][j][k];
            }
        }
    }

    // output values
    cout << "\n3D Array elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cout << ar[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // free memory
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            delete[] ar[i][j];
        }
        delete[] ar[i];
    }
    delete[] ar;

    return 0;
}
