#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int *a;
    a = (int *)calloc(5, sizeof(int));
    for(i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }
    free(a);
}