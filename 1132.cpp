#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string str;
    getline(std::cin, str);

    for ( char i : str ) {
        if ( isalpha(i) )   cout << i;
        else                continue;
    }

    return 0;
}
