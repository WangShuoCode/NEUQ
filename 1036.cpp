#include <iostream>

#define rep(i, a, b) for ( int i = (a); i <= (b); ++ i )

using namespace std;

int main() {
    int max = 0;

    rep(i, 1, 3) {
        int x = 0;
        cin >> x;
        if ( x > max )  max = x;
    }

    cout << max << endl;

    return 0;
}