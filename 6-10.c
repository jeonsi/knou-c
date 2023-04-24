// 포인터 변수의 참조
#include <stdio.h>

void main() {
    int *p, i = 3, j;
    p = &i;
    j = *p;     // *p = i, j = i
    j++;
    printf("*p = %d\n", *p);
    printf(" p = %p\n", p);
    printf(" j = %d\n", j);
}