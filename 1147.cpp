#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = pow(n, 3);
    printf("%d*%d*%d=%d=", n, n, n, sum);

    int first = n * n - n + 1;
    for ( int i = 0; i < n; ++ i ) {
        cout << first + i * 2;
        if ( i != n - 1 )   cout << '+';
    }

    return 0;
}