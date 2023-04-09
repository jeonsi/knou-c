// while 문의 사용
#include <stdio.h>

void main() {
    int i = 1, sum = 0;
    while (i <= 10) {
        sum = sum + i;
        printf("%d번째 실행 : sum = %d\n", i, sum);
        i++;
    }
    printf("1부터 %d까지의 합 = %d\n", i - 1, sum);
}