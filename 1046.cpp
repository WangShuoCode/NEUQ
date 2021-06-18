#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string str;
    getline(std::cin, str);

    int digit = 0, alpha = 0, space = 0, other = 0;

    for ( char c : str ) {
        if ( isalpha(c) )        alpha ++;
        else if ( isdigit(c) )   digit ++;
        else if ( c == ' ' )     space ++;
        else                     other ++;
    }

    printf("%d %d %d %d", alpha, digit, space, other);

    return 0;
}