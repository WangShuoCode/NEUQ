#include <iostream>

#define rep(i, a, b) for ( int i = (a); i < (b); ++ i )

using namespace std;

int main() {
    rep(x, 100, 1000) {
        int a = x / 100;
        int b = x % 100 / 10;
        int c = x % 10;

        int y = c * 100 + b * 10 + a;

        if ( x + y == 1333 )    printf("%d+%d=1333\n", x, y);
    }


    return 0;
}