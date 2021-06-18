#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
    return abs(a) > abs(b);
}

int main() {
    int n;

    while ( cin >> n, n != 0 ) {
        int q[n];
        for ( int i = 0; i < n; ++ i  ) {
            cin >> q[i];
        }

        sort(q, q + n, cmp);

        for ( int i = 0; i < n; ++ i ) {
            cout << q[i];
            if ( i != n - 1 )   cout << ' ';
        }
    }

    return 0;
}