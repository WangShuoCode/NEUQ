#include <cstdio>

using namespace std;

const int N = 100;
int n, m;
int way[N];

void dfs(int u, int start) {
    if ( u + n - start < m ) return;  // 剪枝
    if ( u == m + 1 ) {
        for ( int i = 1; i <= m; i ++ ) printf("%d ", way[i]);
        puts("");
        return;
    }

    for ( int i = start; i <= n; i ++ ) {
        way[u] = i;
        dfs(u + 1, i + 1);
        way[u] = 0; // 恢复现场
    }
}

int main() {
    scanf("%d%d", &n, &m);

    dfs(1, 1);

    return 0;
}