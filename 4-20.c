// break 문의 사용
#include <stdio.h>
#pragma warnging(disable:4996)

void main() {
    int num, sum = 0;
    while (1) {
        printf("num(끝 : 0)...? ");
        scanf("%d", &num);
        if (num == 0)
            break;
        sum = sum + num;
    }
    printf("sum = %d\n", sum);
}