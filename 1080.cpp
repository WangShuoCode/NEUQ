#include <bits/stdc++.h>
#include <vector>

#define rep(i, a, b)    for ( int i = (a); i <= (b); ++ i )

using namespace std;

void f() {

}

int main() {
    int n, m;
    vector<int> q;

    cin >> n;
    rep(i, 1, n) {
        int x;
        cin >> x;
        q.push_back(x);
    }
    cin >> m;

    m = m % n;

    rep(i, n - m, n - 1)    printf("%d ", q[i]);
    rep(i, 0, n - m - 1)    printf("%d ", q[i]);

    return 0;
}