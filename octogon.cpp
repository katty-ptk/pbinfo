#include <iostream>
using namespace std;

int main() {

    int n = 5;

    // prima parte
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



    return 0;
}