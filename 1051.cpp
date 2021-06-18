#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    for ( int x = 2; x <= n; ++ x ) {
        vector<int> q;
        int sum = 0, cnt = 0;
        for ( int j = 1; j < x; ++ j ) {
            if ( x % j == 0 ) {
                sum += j;
                q.push_back(j);
                cnt ++;
            }
        }

        if ( sum == x ) {
            printf("%d its factors are ", x);
            for ( int i : q ) cout << i << ' ';

            cout << endl;
        }
    }

    return 0;
}