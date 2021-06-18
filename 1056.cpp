#include<iostream>

using namespace std;

int main() {
    int a, i, num = 2;
    cin >> a;

    if ( a == 2 )
        cout << 2 << endl;
    else {
        while ( num < a ) {
            for ( i = 2; i <= num / 2; i ++ ) {
                if ( num % i == 0 )
                    break;
            }
            if ( i == num / 2 + 1 )
                cout << num << endl;
            num ++;
        }
    }

    return 0;
}