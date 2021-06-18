#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#define area(a, b, c, s)  sqrt(s * (s - a) * (s - b) * (s - c));
#define S(a, b ,c, s) s = (a + b + c) / 2;

int main() {
    float x, y, z, s;
    cin >> x >> y >> z;

    s = S(x, y, z, s);

    cout << fixed << setprecision(3) << area(x, y, z, s);

    return 0;
}