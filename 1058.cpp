#include <bits/stdc++.h>

using namespace std;

int main() {
    int res1 = 0, res2 = 0;

    for ( int i = 1; i <= 9; ++ i ) {
        int tmp = 0;
        cin >> tmp;
        if ( i == 1 || i == 5 || i == 9  ){
            res1 += tmp;
        }
        if ( i == 3 || i == 5 || i == 7 ) {
            res2 += tmp;
        }
    }

    cout << res1 << ' ' << res2 << endl;

    return 0;
}