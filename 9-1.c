// 메모리 정적할당의 예
// DATA영역, STACK 영역: 정적할당
// HEAP 영역, 동적할당

#include <stdio.h>

void test1(int);
void test2(int);
int a = 100;        // 전역변수, DATA 영역에 할당, 프로그램 종료 시까지 존재

int main() {
    int b = a;      // 지역변수 b, STACK 영역에 할당, main 함수 종료 시까지 존재
    test1(b);
    test2(b);
}

void test1(int c) {     // 매개변수, STACK 영역에 할당, test1 함수 종료 시까지 존재
    int d;              // 지역변수, STACK 영역에 할당
    d = c + 10;
    printf("test1() : d = %d\n", d);
}

void test2(int e) {
    int f;
    f = e + 20;
    printf("test2() : f = %d\n", f);
}
