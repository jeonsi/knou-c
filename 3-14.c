// 조건 연산자의 사용

#include <stdio.h>
int main() {
    int a = 10, b;
    b = (a > 15) ? (a + 1) : (a - 1);
    printf("b = %d\n", b);
}