#include <bits/stdc++.h>

#define rep(i, a, b) for ( int i = (a); i <= (b); i ++ )

using namespace std;

int q[5][5];

int main() {
    int res = 0;
    rep(i, 1, 3) {
        rep(j, 1, 3) {
            cin >> q[i][j];

            if ( i == j ) res += q[i][j];
        }
    }

    cout << res << endl;

    return 0;
}