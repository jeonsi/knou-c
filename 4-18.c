// 의도하지 않은 무한 루프
#include <stdio.h>

int main() {
    float x = 0.0;
    float sum = 0.0;
    while (x != 9.9) {
        sum += x;
        x += 0.1;
    }
    printf("sum = %f\n", sum);
}