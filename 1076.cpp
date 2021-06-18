#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string str;
    getline(std::cin, str);

    for ( int i = 0; i <= str.size(); ++ i ) {
        if ( isalpha(str[i]) ) {
            if ( str[i] == 'z' )        str[i] = 'a';
            else if ( str[i] == 'Z' )   str[i] = 'A';

            else str[i] ++;
        }
    }

    cout << str;

    return 0;
}