// ++, -- 연산자의 사용

#include <stdio.h>
void main() {
    int a, b, c;
    a = b = c = 0;
    a = ++b + ++c;
    printf("a = ++b + ++c 실행 후 a = %d, b = %d, c = %d\n", a, b, c);
    a = b++ + c++;
    printf("a = b++ + c++ 실행 후 a = %d, b = %d, c = %d\n", a, b, c);
    a = b-- + --c;
    printf("a = b-- + --c 실행 후 a = %d, b = %d, c = %d\n", a, b, c);
}