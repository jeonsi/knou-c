// 강제 형변환

#include <stdio.h>
void main() {
    int a, b, c;
    a = 10; b = 20; c = 30;
    printf("a + b * c = %d\n", a + b * c);
    printf("a = b += 2 * c -> a = %d\n", a = b += 2 * c);
    printf("a = (b > c) ? b : c -> a = %d\n", a = (b > c) ? b : c);
    printf("a / b * c = %d\n", a / b * c);
    printf("a *= b = c + 5 -> a = %d\n", a *= b = c + 5);
}