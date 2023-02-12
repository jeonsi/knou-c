#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
    char name[64];
    FILE *fp;
    if((fp = fopen("sample2.txt", "w")) == NULL) {
        puts("파일을 개방할 수 없습니다!");
        exit(1);
    }
    printf("이름을 입력하시오. 입력을 끝내려면 'end'를 입력하시오.\n");
    fgets(name, sizeof(name), stdin);
    while(strcmp(name, "end\n")) {
        // strcat(name, "\n");
        fputs(name, fp);
        fgets(name, sizeof(name), stdin);
    }
    fclose(fp);
}