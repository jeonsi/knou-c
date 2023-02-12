#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a;
    a = (int *)malloc(sizeof(int));
    if(a == NULL) {
        puts("기억공간 할당 실표!");
        exit(1);
    }
    *a = 20;
    printf("힙에 저장된 변수 a: %d\n", *a);
    free(a);
}