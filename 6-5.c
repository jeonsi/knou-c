// char 형 배열
#include <stdio.h>

void main() {
    char name[] = "HONG GIL DONG";
    char adrs1[6] = {'S', 'E', 'O', 'U', 'L', '\0'};
    char adrs2[] = {'S', 'E', 'O', 'U', 'L'};      // SEOUL 다음에 쓰레기값이 붙을 수 있음
    printf("name: %s\n", name);
    printf("adrs1: %s\n", adrs1);
    printf("adrs2: %s\n", adrs2);
}