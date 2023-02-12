//
// Created by 전승일 on 2023/02/06.
//
#include <stdio.h>
int main() {
    int a = 10, b;
    b = (a > 15) ? (a + 1) : (a - 1);
    printf("b = %d", b);
}