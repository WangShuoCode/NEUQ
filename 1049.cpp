#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    double res = 0;

    res += (1.0 + a) * a / 2;

    for ( int i = 1; i <= b; ++ i ) {
        res += pow(i, 2);
    }

    for ( int i = 1; i <= c; ++ i ) {
        res += 1.0 / i;
    }

    printf("%.2lf", res);

    return 0;
}