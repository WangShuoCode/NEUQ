#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;

    ll sum = 2;
    ll num = 2;
    for ( int i = 2; i <= n; i ++ ) {
        num += 2 * pow(10, i - 1);
        sum += num;
    }

    cout << sum << endl;

    return 0;
}