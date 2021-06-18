#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    while ( cin >> n, n != 0 ) {
        int sum = 0;
        int x;

        while ( n != 0 ) {
            cin >> x;
            sum += x;
            n -- ;
        }

        cout << sum << endl;
    }

    return 0;
}