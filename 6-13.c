// 포인터 연산
#include <stdio.h>

void main() {
    int *p, a[] = {10, 20, 30, 40, 50};
    p = &a[0];

    printf("*p    == %d\n", *p);
    printf("*p++  == %d\n", *p++);  // *, ++는 연산자 우선순위가 동일 함. 결합 방향이 우에서 좌임. 즉, *(p++)
    printf("*++p  == %d\n", *++p);

    p = p + 2;
    printf("*p == %d\n", *p);
    printf("a[2] == %d\n", a[2]);
    printf("*p + 2 == %d\n", *p + 2);
}