#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int res = 0;
    for ( int i = 1; i * 5 < n; ++ i ) {
        for ( int j = 1; i * 5 + j * 2 < n; ++ j ) {
            if ( n - (i * 5 + j * 2) > 0 )  res ++;
        }
    }

    cout << res << endl;

    return 0;
}