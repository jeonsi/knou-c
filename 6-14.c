// 포인터 연산
#include <stdio.h>

void main() {
    int *p, *q;
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    p = &a[3];
    printf("*p == %d\n", *p);
    printf("*(p+3) == %d\n", *(p + 3));
    q = p + 3;
    printf("*q == %d\n", *q);
    printf("p - q == %ld\n", p - q);
    printf("q - p == %ld\n", q - p);
    // printf("q + p == %d\n", p + q);
}