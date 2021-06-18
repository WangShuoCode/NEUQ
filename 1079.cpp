#include <stdio.h>

const int N = 1 << 29;
int a[15], min1, max1, b, k;

void make() {
    for ( int i = 0; i < 10; i ++ ) {
        if ( a[i] < min1 ) {
            b = i;
            min1 = a[i];
        }
    }
    int temp;
    temp = a[b];
    a[b] = a[0];
    a[0] = temp;
    for ( int i = 0; i < 10; i ++ ) {
        if ( a[i] > max1 ) {
            k = i;
            max1 = a[i];
        }
    }
    temp = a[k];
    a[k] = a[9];
    a[9] = temp;

}
void print() {
    int i;
    for ( i = 0; i < 10; i ++ ) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {

    scanf("%d", &a[0]);
    min1 = N;
    max1 = - N;
    for ( int i = 1; i < 10; i ++ ) {
        scanf("%d", &a[i]);
    }
    make();
    print();
}