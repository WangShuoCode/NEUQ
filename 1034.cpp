#include <iostream>

#define rep(i, a, b) for ( int i = (a); i <= (b); ++ i )
#define pre(i, a, b) for ( int i = (a); i >= (b); -- i )

using namespace std;

const int N = 1e6 + 10;
int a[10], b[10];
int q[N];

int main() {
    rep(i, 1, 6) {
        cin >> a[i];
        q[a[i]] ++;
    }
    rep(i, 1, 8) {
        cin >> b[i];
        q[b[i]] ++;
    }

    for ( int i = 0; i < 1e6 + 10; ++ i  ) {
        if ( q[i] == 2 )    cout << i << endl;
    }

    return 0;
}