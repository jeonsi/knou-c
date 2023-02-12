#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
    char name[64];
    FILE *fp;
    if((fp = fopen("sample2.txt", "r")) == NULL) {
        puts("파일을 개방할 수 없습니다!");
        exit(1);
    }
    while(fgets(name, 20, fp) != NULL)  //NULL return value indicates an error or an end-of-file condition
        printf("%s", name);
    fclose(fp);
}