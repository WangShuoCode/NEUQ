#include <iostream>

using namespace std;

double solve(double b) { //实现四舍五入功能（保留两位小数）
    double a = b;
    if ( b * 100 > (int) (b * 100)) {
        a = (b + 0.005) * 100 / 100.0;
    }

    return a;
}

int main() {
    double r, h;
    scanf("%lf%lf", &r, &h);

    double c1 = 3.14 * 2 * r;
    double sa = 3.14 * r * r;
    double sb = 4 * 3.14 * r * r;
    double va = 4 / 3.0 * 3.14 * r * r * r;
    double vb = 3.14 * r * r * h;

    printf("C1=%.2lf\nSa=%.2lf\nSb=%.2lf\nVa=%.2lf\nVb=%.2lf", solve(c1), solve(sa), solve(sb), solve(va), solve(vb));

    return 0;
}