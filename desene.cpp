#include<iostream>
using namespace std;

// 111
// 222
// 333

int main() {

    int c, n;
    cin >> c >> n;

    switch ( c ) {
        case 1:
            // patrat
            for ( int i = 1; i <= n; i++ ) {
                for ( int j = 1; j <= n; j++ ) {
                    cout << i;
                }

                cout << endl;
            }
            break;

        case 2:
            // romb
            for ( int i = 1; i <= n; i++ ) {    // prima jumatate
                for ( int j = 1; j <= 2 * n - 1; j++ ) {
                    if (( j == n ) || ( j < n && j > n - i ) || ( j > n && j < n + i )) {
                        cout << i;
                    } else {
                        cout << " ";
                    }
                }
                
                cout << endl;
            }

            for ( int i = n - 1; i >= 1; i-- ) {
                for ( int j = 1; j <= 2 * n - 1; j++ ) {
                    if ( ( j == n ) || ( j < n && j > n - i ) || ( j > n && j < n + i ) ) {
                        cout << i;
                    } else {
                        cout << " ";
                    }
                }

                cout << endl;
            }
            break;

        case 3:
            // dreptunghi -> L = n; l = 2 * n
            cout << "c is 3";
            break;

        case 4:
            // triunghi isoscel
            cout << "c is 4";
            break;
    }

    return 0;
}