// 함수 원형의 선언이 필요한 경우의 예
#include <stdio.h>

int sum(int a, int b);      // 함수 원형의 선언이 필요함

void main() {
    printf("sum = %d\n", sum(10, 20));
}

int sum(int a, int b) {
    return (a + b);
}