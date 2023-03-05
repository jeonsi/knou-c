// 대입 연산자의 사용

#include <stdio.h>
void main() {
    int a = 10, b = 3, c = 1;
    a *= (b - 1);   // a = a * (b - 1)
    b /= 2 + 3;     // b = b / (2 + 3)
    c += 2;         // c = c + 2
    printf("a = %d, b = %d, c = %d\n", a, b, c);
}