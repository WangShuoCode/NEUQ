#include <bits/stdc++.h>

using namespace std;

int main() {
    int q[4];
    for ( int i = 0; i < 4; ++ i ) {
        cin >> q[i];
    }

    sort(q, q + 4);


    for ( int i = 0; i < 4; ++i  ) {
        cout << q[i];
        if ( i != 3 )   cout << ' ';
    }

    return 0;
}