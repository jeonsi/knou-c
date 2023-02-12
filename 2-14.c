//
// Created by 전승일 on 2023/02/04.
//
#include <stdio.h>
#define CONDITION 1
int main() {
#if CONDITION
    printf("\n A 프로그램을 컴파일");
#elif 100
    printf("\n B 프로그램을 컴파일");
#else
    printf("\n C 프로그램을 컴파일");
#endif
}