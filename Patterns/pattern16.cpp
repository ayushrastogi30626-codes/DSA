#include<iostream>
using namespace std;

int main() {
    int row, col, n;

    cout << "Input the value: ";
    cin >> n;

    for(row = n; row >= 1; row--) {

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
}