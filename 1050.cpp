#include <bits/stdc++.h>

using namespace std;

int main() {
    for ( int i = 111; i <= 999; ++ i ) {
        int a = i / 100, b = i % 100 / 10, c = i % 10;

        if ( pow(a, 3) + pow(b, 3) + powf(c, 3) == i )  cout << i << endl;
    }

    return 0;
}