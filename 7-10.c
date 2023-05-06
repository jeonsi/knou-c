// 구조체의 비트필드
#include <stdio.h>

// 기억공간을 bit 단위로 사용
// bit field의 자료형은 int 혹은 unsigned로 선언
// bit field에 대한 포인터나 배열은 안 됨
// bit field가 2개의 자료형 사이에 걸쳐 저장될 수 없음
struct test {
    unsigned short a:5;
    unsigned short b:6;
    unsigned short c:6;
    unsigned short d:4;
};
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
// |--a-----|-b----------|---미사용-------|c----------|-d-----| 미사용

void main() {
    struct test bit;
    bit.a = 15;
    bit.b = 3;
    bit.c = 0;
    bit.d = 12;

    printf("bit.a = %d bit.b = %d bit.c = %d bit.d = %d\n", bit.a, bit.b, bit.c, bit.d);
    printf("bit는 %ld byte를 사용한다.\n", sizeof(bit));
}