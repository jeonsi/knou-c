// malloc: byte 단위 할당, 초기화 안됨. void * 반환
// calloc: 단위메모리 * 개수만큼 할당, 0으로 초기화 됨
// free:  메모리 해제
// realloc: 이미 할당된 동적메모리의 크기 변경

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