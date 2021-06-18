#include <bits/stdc++.h>

#define rep(i, a, b) for ( int i = (a); i <= (b); ++ i )
#define pre(i, a, b) for ( int i = (a); i >= (b); -- i )

using namespace std;

int q[50];

int main() {
    int num = 20;
    rep(i, 1, 20) cin >> q[i];

    rep(i, 1, 20) {
        rep(j, 1, 20) {
            if ( q[i] != q[j] && q[i] % q[j] == 0 ) {
                cout << q[i] << endl;
                break;
            }
        }
    }

    return 0;
}