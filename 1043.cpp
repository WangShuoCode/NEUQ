#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str = to_string(n);

    cout << str.size() << endl;

    for ( int i = 0; i < str.size(); ++ i ) {
        cout << str[i];
        if ( i != str.size() - 1 )  cout << ' ';
    }

    cout << endl;

    for ( int i = str.size() - 1; i >= 0; -- i ) {
        cout << str[i];
    }

    return 0;
}