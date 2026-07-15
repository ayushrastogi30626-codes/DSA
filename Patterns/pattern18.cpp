#include<iostream>
using namespace std;

int main() {
    int row, col, n;

    cout << "Input the value: ";
    cin >> n;

    // Upper Half
    for(row = 1; row <= n; row++) {

        // Left Stars
        for(col = 1; col <= row; col++) {
            cout << "*";
        }

        // Spaces
        for(col = 1; col <= 2 * (n - row); col++) {
            cout << " ";
        }

        // Right Stars
        for(col = 1; col <= row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower Half
    for(row = n - 1; row >= 1; row--) {

        // Left Stars
        for(col = 1; col <= row; col++) {
            cout << "*";
        }

        // Spaces
        for(col = 1; col <= 2 * (n - row); col++) {
            cout << " ";
        }

        // Right Stars
        for(col = 1; col <= row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}