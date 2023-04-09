// 단순 if문의 사용

#include <stdio.h>
int main() {
    int a = 10, b = 10;
    printf("if문 실행 전 : a = %d, b = %d \n", a, b);
    if(a > b) {
        a = a + 20;
        printf("a = %d \n", a);
    }
    b = b + 20;
    printf("if문 실행 후 : a = %d, b = %d \n", a, b);
}