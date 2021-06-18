#include <bits/stdc++.h>

#define rep(i, a, b) for ( int i = (a); i < (b); ++ i )

using namespace std;

int main() {
    double sum = 0;
    int x, cnt = 0, n = 0;

    rep(i, 0, 20) {
        cin >> x;

        if ( x < 0 )    cnt ++;
        else            sum += x, n ++;
    }

    printf("%d\n%.2lf\n", cnt, sum / n);

    return 0;
}