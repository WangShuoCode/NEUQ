#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;
struct node{
    int id, score;
} q[N];

bool cmp(node a, node b) {
    return a.id < b.id;
}

int main() {
    int n, m;
    cin >> n >> m;

    for ( int i = 1; i <= n + m; ++ i ) {
        cin >> q[i].id >> q[i].score;
    }

    sort(q + 1, q + n + m + 1, cmp);

    for ( int i = 1; i <= n + m; ++ i ) {
        cout << q[i].id << ' ' << q[i].score << endl;
    }

    return 0;
}