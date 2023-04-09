// goto 문의 사용
#include <stdio.h>
#pragma warning(disable:4996)

void main() {
    int i, n, c = 'A';
    while (1) {
        printf("횟수는? ");
        scanf("%d", &n);
        for (i = 1; i <= n; i++) {
            printf("%c", c);
            if (c == 'Q')
                goto end;
            c++;
        }
    }
    end:
    printf("\n\n끝\n");
}