#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string str;

    while ( cin >> str ) {
        int num = 0;
        for ( int i = 0; i < str.size(); ++ i ) {
            num += str[i] - '0';
        }

        cout << num << endl;
    }

    return 0;
}