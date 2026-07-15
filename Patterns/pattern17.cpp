#include<iostream>
using namespace std;

int main() {
    int row, col, n;

    cout << "Input the value: ";
    cin >> n;

    // Upper half
    for(row = n; row >= 1; row--) {

        // Left stars
        for(col = 1; col <= row; col++)
            cout << "*";

        // Spaces
        for(col = 1; col <= 2*n - 2*row; col++)
            cout << " ";

        // Right stars
        for(col = 1; col <= row; col++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for(row = 1; row <= n; row++) {

        // Left stars
        for(col = 1; col <= row; col++)
            cout << "*";

        // Spaces
        for(col = 1; col <= 2*n - 2*row; col++)
            cout << " ";

        // Right stars
        for(col = 1; col <= row; col++)
            cout << "*";

        cout << endl;
    }

    return 0;
}