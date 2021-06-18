#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    int a, n;
    cin >> a >> n;


    ll tmp = a;
    ll sum = 0;

    for ( int i = 1; i <= n; ++ i ) {
        sum += tmp;
        tmp += a * pow(10, i);
    }

    cout << sum;

    return 0;
}