#include <bits/stdc++.h>

#define rep(i, a, b) for ( int i = (a); i < (b); ++ i )

using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    ll sum = 0;

    while ( n -- ) {
        int x;
        cin >> x;

        if ( x % 2 == 0 )   sum += x;
    }

    cout << sum << endl;

    return 0;
}