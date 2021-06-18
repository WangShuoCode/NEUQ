#include <bits/stdc++.h>

#define rep(i, a, b) for ( int i = (a); i <= (b); ++ i )
#define pre(i, a, b) for ( int i = (a); i >= (b); -- i )

using namespace std;

int main() {
    int q[10];
    rep(i, 0, 9) {
        cin >> q[i];
    }

    pre(i, 9, 0) {
        cout << q[i];

        if ( i != 0 )   cout << ' ';
    }

    return 0;
}