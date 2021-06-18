#include <bits/stdc++.h>

#define rep(i, a, b) for ( int i = (a); i < (b); ++ i )

using namespace std;

typedef unsigned long long ull;

double q[50];

int main() {
    q[1] = 1;
    rep(i, 2, 31) {
        q[i] = i * q[i - 1];
//        cout << i << ':' << q[i] << endl;
    }

    double sum = 0;
    rep(i, 1, 31)   sum += q[i];

    printf("%.2e\n", sum);

    return 0;
}