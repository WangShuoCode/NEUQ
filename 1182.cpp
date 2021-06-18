#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string a = "~!@#$%^";

    while ( n -- ) {
        string str;
        cin >> str;

        if ( str.size() < 8 || str.size() > 16 ) {
            cout << "NO" << endl;
            continue;
        }

        int q[4] = {0, 0, 0, 0};

        for ( char i : str ) {
            if ( isdigit(i) )               q[0] ++;
            if ( i >= 'A' && i <= 'Z' )     q[1] ++;
            if ( i >= 'a' && i <= 'z' )     q[2] ++;
            if ( a.find(i) != string::npos )    q[3] ++;
        }

        int cnt = 0;
        for ( int i = 0; i < 4;  ++ i ) {
            if ( q[i] != 0 )    cnt ++;
        }

        if ( cnt >= 3 )     cout << "YES" << endl;
        else                cout << "NO" << endl;
    }


    return 0;
}