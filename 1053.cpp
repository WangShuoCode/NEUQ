#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double m, n, h;
    cin >> m >> n;
    h = 0.0;

    for ( int i = 1; i <= n; i ++ ) {
        if ( i == 1 ) h = h + m;
        else h = h + 2 * m;
        m = m / 2.0;
    }

    cout << fixed << setprecision(2) << m << " " << h;

    return 0;
}