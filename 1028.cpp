#include <iostream>

#define rep(i, a, b) for ( int i = (a); i < (b); ++ i )

using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;

    while ( n != 1 ) {
        rep(i, 2, n + 1) {
            if ( n % i == 0 ) {
                cout << i << ' ';
                n /= i;
                break;
            }
        }
    }


    return 0;
}