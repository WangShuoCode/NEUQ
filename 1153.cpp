#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 0;
    long long tmp = 1;

    for ( int i = 1; i <= n; ++ i ) {
        tmp *= i;
        sum += tmp;
    }

    cout << sum << endl;

    return 0;
}