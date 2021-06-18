#include <bits/stdc++.h>
#include <string>

#define rep(i, a, b) for ( int i = (a); i <= (b); ++ i )

using namespace std;

struct node{
    string id;
    string name;
    int a, b, c, sum;
}q[10000];

int main() {
    int n;
    cin >> n;

    rep(i, 1, n) {
        cin >> q[i].id >> q[i].name >> q[i].a >> q[i].b >> q[i].c;
        q[i].sum = q[i].a + q[i].b + q[i].c;
    }

    int max;
    rep(i, 1, n) {
        if ( q[i].sum > q[max].sum )   max = i;
    }

    double aa = 0, bb = 0, cc = 0;
    rep(i, 1, n) {
        aa += q[i].a;
        bb += q[i].b;
        cc += q[i].c;
    }

    aa /= n, bb /= n, cc /= n;

    printf("%.0lf %.0lf %.0lf\n", aa, bb, cc);
    cout << q[max].id << ' ' << q[max].name << ' ' << q[max].a << ' ' << q[max].b  << ' ' << q[max].c;

    return 0;
}