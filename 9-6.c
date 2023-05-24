// memcpy : A 기억공간 자료를 B 기억공간으로 복사
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "1230567890";
    char dest[] = "abcdefghijklmnopqrstuvwxyz";
    char *stat;
    printf("memcpy() 실행 전 dest의 데이터: %s\n", dest);
    stat = (char *)memcpy(dest, src, strlen(src));  // 10개 복사
    if(stat)
        printf("memcpy() 실행 후 dest의 데이터: %s\n", dest);
    else
        printf("복사 실패\n");
}