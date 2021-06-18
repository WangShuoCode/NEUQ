#include <bits/stdc++.h>
#include <string>

using namespace std;

typedef long long ll;

bool isP(ll n) {
    string str = to_string(n);

    for ( int i = 0; i <= str.length() - 1; ++ i ) {
        if ( str[i] != str[str.length() - 1 - i] ) {
            return false;
        }
    }

    return true;
}

int solve(ll n ) {
    int cnt = 0;

    while ( ! isP(n) ) {
        string str = to_string(n);
        string res(str.rbegin(), str.rend());
        ll num = stoll(res);

        n += num;
        cnt ++;

        if ( cnt > 8 )  return 0;
    }


    return cnt;
}

int main() {
    int t;
    cin >> t;

    while ( t -- ) {
        ll n;
        cin >> n;

        cout << solve(n) << endl;
    }

    return 0;
}