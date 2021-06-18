#include <bits/stdc++.h>
#define rep(i, a, b) for ( int i = (a); i <= (b); ++ i )

using namespace std;

bool cmp(long long a, long long b) {
    return a > b;
}

int main() {
    long long q[10];
    rep(i, 0, 9)    cin >> q[i];
    sort(q, q + 10, cmp);

    rep(i, 0, 9) {
        cout << q[i];
        if ( i != 9 )   cout << ' ';
    }

    return 0;
}