// 단순 if문의 사용

#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int a;
    printf("정수입력(1~200) : ");
    scanf("%d", &a);
    if (a < 100)
        printf("입력한 정수가 100보다 작음. \n");
    printf("a = %d\n", a);
}