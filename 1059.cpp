#include <bits/stdc++.h>

using namespace std;

int main() {
    int q[10];
    for ( int i = 1; i <= 9; ++ i ) {
        cin >> q[i];
    }

    cin >> q[0];

    sort(q, q + 9);

    for ( int i = 0; i <= 9; ++ i ) {
        cout << q[i] << endl;
    }


    return 0;
}