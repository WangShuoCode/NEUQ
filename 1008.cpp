#include <bits/stdc++.h>

#define rep(i, a, b) for ( int i = (a); i < (b); ++ i )

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int gcd = __gcd(n, m);
    cout << gcd<< '\n' << n * m / gcd;

    return 0;
}