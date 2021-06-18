#include <bits/stdc++.h>
//TODO:约瑟夫环问题
int main() {
    int a[1005], n, b = 1, m, j = 1, v, x;
    scanf("%d", &m);
    memset(a, 1, sizeof(a));                       //数组初始化为1，代表全部没有淘汰
    int c = m;
    while ( c != 1 ) {
        c = 0;                                     //c代表总人数,如果人数剩余为1，则输出
        for ( int k = 1; k <= m; k ++ ) {
            if ( a[k] != 0 )                          //如果不为0，则代表没有淘汰，继续报数
            {
                a[k] = b;                         //b代表报的数是多少
                b ++;
                c ++;
                v = k;                            //记下没被淘汰人的下标，方便输出
            }
            if ( a[k] == 3 )                         //如果报的数为三则淘汰
            {
                a[k] = 0;
                b = 1;                            //b归为1，从新开始报数
            }
        }
    }

    printf("%d\n", v);                          //输出剩余那个人的标号

    return 0;
}