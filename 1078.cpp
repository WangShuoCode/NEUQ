#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string q[3];
    cin >> q[0] >> q[1] >> q[2];

    sort(q, q + 3);

    cout << q[0] << endl << q[1] << endl << q[2];

    return 0;
}