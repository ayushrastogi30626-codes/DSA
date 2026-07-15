#include<iostream>
using namespace std;

int main() {
    int row, col, n;

    cout << "Input the value: ";
    cin >> n;

    for(row = 1; row <= n; row++) {

        // Print spaces
        for(col = 1; col <= n - row; col++) {
            cout << " ";
        }

        // Print alphabets
        for(char name = 'A'; name <= 'A' + row - 1; name++) {
            cout << name;
        }

        cout << endl;
    }
}