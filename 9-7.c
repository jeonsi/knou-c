// 메모리 공간 초기화

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "1230567890";
    printf("memset() 실행 전의 s의 데이터: %s\n", s);
    memset(s, '*', strlen(s));
    printf("memset() 실행 후의 s의 데이터: %s\n", s);
}