// for 문의 사용

#include <stdio.h>
int main() {
    int i, sum = 0;
    for (i = 1; i <= 10; ++i) {
        sum = sum + i;
        printf("%d번째 실행: sum = %d\n", i, sum);
    }
    printf("1부터 %d까지의 합 = %d\n", i - 1, sum);
}