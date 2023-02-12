#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
    int size;
    char *str;
    printf("문자열의 크기를 입력하세요: ");
    scanf("%d", &size);
    str = (char *)malloc(size + 1);
    if(str == NULL) {
        puts("기억공간 할당 실패");
        exit(1);
    }
    printf("문자열을 입력하세요: ");
    scanf("%s", str);
    printf("동적 할당된 메모리에 저장된 문자열: %s\n", str);
    free(str);
}