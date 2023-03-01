#include <stdio.h>
int main() {
    int i = -140; // i = ff_ff_ff_74
    printf("i = %x\n", i);
    printf("i >> 10: %x\n", i >> 10);   // i >> 10 : ff_ff_ff_ff

    unsigned j = -140; // j = ff_ff_ff_74
    printf("j = %x\n", j);
    printf("j >> 10: %x\n", j >> 10);   // j >> 10 : 00_3f_ff_ff
}