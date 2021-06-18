#include <bits/stdc++.h>

#define rep(i, a, b) for ( int i = (a); i < (b); ++ i )

using namespace std;

const int N = 40;
int a, b, n;
int q[N];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;

    while ( t -- ) {
        int a, b, n;
        cin >> a >> b >> n;

        q[1] = a, q[2] = b;

        rep(i, 3, n + 1) {
            if ( i % 2 == 0 ) q[i] = q[i - 1] + q[i - 2] + q[i - 3];
            else              q[i] = q[i - 1] + q[i - 2];
        }

        cout << q[n] << endl;
    }

    return 0;
}