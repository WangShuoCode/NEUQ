#include <bits/stdc++.h>

#define rep(i, a, b) for ( int i = (a); i < (b); ++ i )

using namespace std;

int main() {
    //a1 = 2 a2 = 5  d = 3
    //an = (n - 1) * 3 + 2
    //sum = (a1 + an) * n / 2

    int n;
    cin >> n;
    int an = (n - 1) * 3 + 2;
    cout << (2 + an) * n / 2 << endl;

    return 0;
}