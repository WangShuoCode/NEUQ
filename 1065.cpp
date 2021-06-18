#include <bits/stdc++.h>
#include <string>

using namespace std;

string reverse(string str) {
    return str;
}

int main() {
    string str;

//    getline(std::cin, str);
    cin >> str;
    string res = reverse(str);

    for ( int i = res.size() - 1; i >= 0; -- i ) {
        cout << res[i];
    }

    return 0;
}