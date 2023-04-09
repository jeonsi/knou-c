// return 문의 사용 예
#include <stdio.h>
#pragma warnging(disable:4996)

int max(int x, int y);
int min(int x, int y);

void main() {
    int i, j;
    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &i, &j);
    printf("max(%d, %d) = %d\n", i, j, max(i, j));
    printf("min(%d, %d) = %d\n", i, j, min(i, j));
}

int max(int x, int y) {
    return (x > y ? x : y);
}

int min(int x, int y) {
    if (x > y)
        return y;
    else
        return x;
}