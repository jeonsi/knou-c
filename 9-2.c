// 메모리 동적할당의 예1

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a;
    a = (int *)malloc(sizeof(int));     // malloc(4): 4 byte 동적할당
    if(a == NULL) {
        puts("기억공간 할당 실패!");
        exit(1);
    }
    *a = 20;
    printf("힙에 저장된 변수 a: %d\n", *a);
    free(a);    // 동적메모리 해제
}