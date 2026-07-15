#include<iostream>
using namespace std;

int main() {
    int row, col, n;

    cout << "Input the value: ";
    cin >> n;

    // Upper Half
    for(row = 1; row <= n; row++) {

        // Print spaces
        for(col = 1; col <= n - row; col++) {
            cout << " ";
        }

        // Print stars
        for(col = 1; col <= 2 * row - 1; col++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower Half
    for(row = n - 1; row >= 1; row--) {

        // Print spaces
        for(col = 1; col <= n - row; col++) {
            cout << " ";
        }

        // Print stars
        for(col = 1; col <= 2 * row - 1; col++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}