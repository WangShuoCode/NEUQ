#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    long long n;
    cin >> n;

    string str = to_string(n);
    string res(str.rbegin(), str.rend());


    cout << res << endl;

    return 0;
}