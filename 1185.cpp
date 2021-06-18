#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;
int q[N];
int res[N], cnt = 0;

int main() {
    int n;
    cin >> n;

    while ( n -- ) {
        int x;
        cin >> x;

        q[x] ++;
    }

    for ( int i = 1; i < N; ++ i ) {
        if ( q[i] != 0 ) {
            res[cnt] = i;
            cnt ++;
        }
    }

    cout << cnt << endl;
    for ( int i = 0; i < cnt; ++ i ) {
        cout << res[i];
        if ( i != cnt - 1 ) cout << ' ';
    }

    return 0;
}