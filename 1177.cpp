#include <bits/stdc++.h>
//#define DEBUG
using namespace std;

int main() {
    int t;
    cin >> t;

    while ( t -- ) {
        int a, b;
        cin >> a >> b;

        int a_sum = 0, b_sum = 0;

        for ( int i = 1; i < a; ++ i ) {
            if ( a % i == 0 ) a_sum += i;
        }

        for ( int i = 1; i < b; ++ i ) {
            if ( b % i == 0 ) b_sum += i;
        }

#ifdef DEBUG
        cout << a_sum << ' ' << b_sum << endl;
#endif

        if ( a_sum == b && b_sum == a )   cout << "YES" << endl;
        else                              cout << "NO" << endl;
    }


    return 0;
}