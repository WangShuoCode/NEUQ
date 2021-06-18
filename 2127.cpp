#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while ( n -- ) {
        long long sum = 0;
        int m;
        cin >> m;
        while ( m -- ) {
            int x;
            cin >> x;

            sum += x;
        }

        cout << sum << endl;
    }

    return 0;
}