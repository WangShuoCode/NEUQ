#include <iostream>

#define rep(i, a, b) for ( int i = (a); i <= (b); ++ i )

using namespace std;

char q[10];
int main() {
    rep(i, 1, 5) {
        cin >> q[i];
        q[i] += 4;
        cout << q[i];
    }

    return 0;
}