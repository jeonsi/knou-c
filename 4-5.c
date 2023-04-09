// 다중 if ~ else문의 사용

#include <stdio.h>
#pragma warning(disable:4996)
void main() {
    int a;
    printf("정수를 입력하세요 : ");
    scanf("%d", &a);
    if (a >= 0)
        if (a == 0)
            printf("입력된 값은 0\n");
        else    printf("입력된 값은 양수\n");
    else
        printf("입력된 값은 음수\n");
}