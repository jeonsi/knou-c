// 자동 형변환

#include <stdio.h>
void main() {
    int a = 3, b = 4;
    double c;
    c = a / b;      // int devision, and then auto casting
    printf("나눗셈 결과 : %f\n", c);    // 0.0
}