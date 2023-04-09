// continue 문의 사용
# include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

void main() {
    int num = 1;
    while (num != 0) {
        printf("num = ?(0 : 종료) : ");
        scanf("%d", &num);
        if (num < 0) {
            printf("num : Negative number !\n\n");
            continue;
        }
        printf("Sqareroot of %d = %f\n\n", num, sqrt(num));
    }
    printf("The end\n");
}