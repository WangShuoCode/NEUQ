#include <iostream>

using namespace std;

void func() {
    int a, d1, d2, d3, d4;
    cin >> a;
    d1 = a % 10;
    d2 = a / 10 % 10;
    d3 = a / 100 % 10;
    d4 = a / 1000;
    cout << d4 << ' ' << d3 << ' ' << d2 << ' ' << d1 << ' ';
}

int main() {
    func();

    return 0;
}