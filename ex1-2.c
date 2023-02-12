//
// Created by 전승일 on 2023/02/04.
//

#include <stdio.h>
#pragma warning(disable:4996)

int a, b, c;
int product(int x, int y);

int main() {
    printf("첫 번째 수를 입력(1~100): ");
    scanf("%d", &a);
    printf("두 번째 수를 입력(1~100): ");
    scanf("%d", &b);
    c = product(a, b);
    printf("%d + %d = %d\n", a, b, c);
    return 0;
}

int product(int x, int y) {
    return (x * y);
}