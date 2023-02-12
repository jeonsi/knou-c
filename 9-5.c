#include <stdio.h>
#include <string.h>

int main() {
    char *s1 = "aaab";
    char *s2 = "aaac";
    int stat;
    stat = memcmp(s1, s2, 3);
    printf("%d", stat);
}