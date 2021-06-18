#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main() {
    double x;

    while ( cin >> x ) {
        double res = 4.0 * pow(x, 3) * PI / 3.0;

        printf("%.3lf\n", res);
    }

    return 0;
}