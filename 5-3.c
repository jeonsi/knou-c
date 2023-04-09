// 함수 원형 선언이 필요없는 경우의 예
#include <stdio.h>

int sum(int a, int b) {
    return (a + b);
}

void main() {
    printf("sum = %d\n", sum(10, 20));
}