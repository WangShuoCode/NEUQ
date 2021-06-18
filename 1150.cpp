#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string str;
    getline(std::cin, str);

    int res = 0;
    for ( char i : str ) {
        if ( isalpha(i) )   res ++;
    }

    cout << res;

    return 0;
}