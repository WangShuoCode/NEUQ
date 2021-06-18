#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;
int q[N];

int main() {
    int n;
    cin >> n;

    q[1] = 1, q[2] = 2;
    for ( int i = 3; i <= n + 1; ++ i ) {
        q[i] = q[i - 1] + q[i - 2];
    }

    double res = 0;
    for ( int i = 1; i <= n; ++ i ) {
        res += (double)q[i + 1] / q[i];
    }

    printf("%.2lf", res);

    return 0;
}