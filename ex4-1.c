// 정수 n을 입력받아 n 보다 작은 정수변을 갖는 직각삼각형을 모두 구하는 프로그램
// 직각삼각형의 성립조건은 a^2 = b^2 + c^2
#include <stdio.h>
#pragma warning(disable:4996)

void main() {
    int a, b, c, n;
    printf("maximum value = ? ");
    scanf("%d", &n);
    printf("A\tB\t\C\n");
    for (a = 1; a <= n; a++) {
        for (b = 1; b <= n; b++) {
            for (c = 1; c <= n; c++) {
                if (a*a == b*b + c*c)
                    printf("%d\t%d\t%d\n", a, b, c);
            }
        }
    }
}