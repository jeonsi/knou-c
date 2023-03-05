// sizeof()의 사용

#include <stdio.h>
void main() {
    float a = 3.14;
    printf("int형의 크기는 = %d바이트\n", sizeof(int));
    printf("float형 변수 a의 크기는 = %d바이트\n", sizeof(a));
}