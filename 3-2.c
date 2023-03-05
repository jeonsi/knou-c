// printf() 양식 변환기호의 사용

#include <stdio.h>
void main() {
    printf("%%d : %d\n", 2147483647);
    printf("%%ld : %ld\n", 2147483647);
    printf("%%lld: %lld\n", 9223372036854775807);
    printf("%%u: %u\n", 4294967295);
    printf("%%o: %o\n", 4294967295);
    printf("%%x: %x\n", 4294967295);
    printf("%%X: %X\n", 4294967295);
    printf("%%f: %f\n", 1234.5678);
    printf("%%lf: %lf\n", 1234.5678);
    printf("%%e: %e\n", 1234.5678);
    printf("%%c: %c\n", 'c');
    printf("%%s: %s\n", "knou");
}