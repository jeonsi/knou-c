// do ~ while 문의 사용
#include <stdio.h>
#pragma warning(disable:4996)

void main() {
    int i = 0, n;
    int sum = 0;
    printf("n = ? ");
    scanf("%d", &n);
    do {
        sum = sum + i;
        i++;
    } while (i <= n);
    printf("i = %d\n", i);
    printf("i ~ %d까지 합 = %d\n", n, sum);
}