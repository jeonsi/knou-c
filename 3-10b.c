#include <stdio.h>
void main() {
    int x = 5, a, b;
    a = ++x*x--;    // a should be 36. If a = 30, cummulative property of multiplication must have been applied for compiler optimization.
    b = x*10;
    printf("a = %d b=%d x=%d\n", a, b, x);
}