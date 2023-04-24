// 이중포인터의 사용
#include <stdio.h>

void main() {
    char a = 'A', *p, **pp;
    p = &a;
    pp = &p;
    printf("**pp = %c\n", **pp);
}