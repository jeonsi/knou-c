// 전역변수의 사용 예
#include <stdio.h>

void fcn1();
int x;      // 0으로 초기화 됨

void main() {
    printf("1) x = %d\n", x);
    fcn1();
    printf("2) x = %d\n", x);
}

void fcn1() {
    x++;
}