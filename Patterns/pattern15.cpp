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

       //Print numbers
       {
        for(col = 1; col <=row; col=col+1) {
            cout<<col<<" ";
        }
        //Print row-1 to 1
        {
            for(col=row-1; col>=1; col=col-1)
            {
                cout<<col<<" ";
            }
        

        cout << endl;
        }
    }
}
}