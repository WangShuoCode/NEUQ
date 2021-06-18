#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while ( n -- ) {
        int h, m, s, hh, mm, ss;
        cin >> h >> m >> s >> hh >> mm >> ss;

        int hhh = h + hh, mmm = m + mm, sss = s + ss;

        if ( sss >= 60 ) {
            mmm += sss / 60;
            sss %= 60;
        }

        if ( mmm >= 60 ) {
            hhh += mmm / 60;
            mmm %= 60;
        }

        printf("%d %d %d\n", hhh, mmm, sss);
    }

    return 0;
}