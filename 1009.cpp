#include <bits/stdc++.h>
#include <string>

#define rep(i, a, b) for ( int i = (a); i < (b); ++ i )

using namespace std;

int main() {
    string str;
    getline(cin, str);

    int alpha = 0, space = 0, digit = 0, other = 0;

    for ( char i : str ) {
        if ( isalpha(i) )       alpha ++;
        else if ( isspace(i) )  space ++;
        else if ( isdigit(i) )  digit ++;
        else                    other ++;
    }

    cout << alpha << endl;
    cout << space << endl;
    cout << digit << endl;
    cout << other << endl;

    return 0;
}