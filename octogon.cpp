#include <iostream>
using namespace std;

int main() {

    int n = 10;

    // partea 1
    for ( int i = 1; i < n; i++ ) {
        for ( int j = 1; j <= n - i; j++ ) {
            cout << "#";
        }

        for ( int j = 1; j <= ( 3 * n - 2 ) - ( 2 * ( n - i ) ); j++ ) {
            cout << "*";
        }
        
        for ( int j = 1; j <= n - i; j++ ) {
            cout << "#";
        }

        cout << endl;
    }


    // partea 2
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= 3 * n - 2; j++ ) {
            cout << "*";
        }

        cout << endl;
    }

    // partea 3
    for ( int i = 1; i < n; i++ ) {
        for ( int j = 1; j <= i; j++ ) {
            cout << "#";
        }

        for ( int j = 1; j <= ( 3 * n - 2 ) - ( 2 * i ); j++ ) {
            cout << "*";
        }

        for ( int j = 1; j <= i; j++ ) {
            cout << "#";
        }

        cout << endl;
    }



    return 0;
}