#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;

    ll num = 1, sum = 0;
    for ( int i = 1; i <= n; ++ i ) {
        num *= i;
        sum += num;
    }

    cout << sum << endl;

    return 0;
}