#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int res = 1;
    for ( int i = 1; i < n; ++ i ) {
        res ++;
        res *= 2;
    }

    cout << res << endl;

    return 0;
}