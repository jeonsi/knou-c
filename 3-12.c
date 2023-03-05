// 논리 연산자의 사용

#include <stdio.h>
void main() {
    int a = 4, b = 7, c, d, e;
    c = a > 2 && b <= 7;    // true and true is true
    printf("c = %d\n", c);
    d = a < 2 || b <= 7;    // false or true is true
    printf("d = %d\n", d);
    e = !a;     // not true is false
    printf("e = %d\n", e);
}