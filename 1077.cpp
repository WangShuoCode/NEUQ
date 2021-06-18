#include <bits/stdc++.h>

using namespace std;

int main() {
    long long q[3];
    cin >> q[0] >> q[1] >> q[2];

    sort(q, q + 3);

    cout << q[0] << " " << q[1] << " " << q[2] << ' ';

    return 0;
}