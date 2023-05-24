// memcmp : 메모리 내용이 같은지 비교, s1 > s2 => +, s1 == s2 => 0, s1 < s2 => -
// mem.h가 필요하다고 하나 mem.h가 없음

#include <stdio.h>
#include <string.h>

int main() {
    char *s1 = "aaab";
    char *s2 = "aaac";
    int stat;
    stat = memcmp(s1, s2, 3);
    printf("%d", stat);
}