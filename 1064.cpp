#include <bits/stdc++.h>

#define rep(i, a, b) for ( int i = (a); i <= (b); ++ i )

using namespace std;

int main() {
    int q[4][4];

    rep(i, 1, 3) {
        rep(j, 1, 3) {
            cin >> q[i][j];
        }
    }

    rep(i, 1, 3) {
        rep(j ,1, 3) {
            cout << q[j][i] << ' ';
//            if ( j != 3 )  cout << ' ';
        }
        cout << endl;
    }


    return 0;
}