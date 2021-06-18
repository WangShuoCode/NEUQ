#include <iostream>
#include <bits/stdc++.h>

#define rep(i, a, b) for ( int i = (a); i <= (b); ++ i )

using namespace std;

int q[20];

int main() {
    rep(i, 1, 10)   cin >> q[i];

    sort(q + 1, q + 11);

    rep(i, 1, 10)   cout << q[i] << endl;

    return 0;
}