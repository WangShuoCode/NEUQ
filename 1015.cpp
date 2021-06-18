#include <iostream>

#define rep(i, a, b) for ( int i = (a); i < (b); ++ i )

using namespace std;

int main() {
    rep(i, 10, 1000) {
        if ( i % 2 == 0 && i % 3 == 0 && i % 7 == 0 ) {
            cout << i << endl;
        }
    }


    return 0;
}