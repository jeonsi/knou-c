#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
    FILE *fp;
    int c;
    fp = fopen("sample1.txt", "w");
    if(fp == NULL) {
        printf("파일을 개방할 수 없습니다!");
        exit(1);
    }
    printf("문자열을 입력하시오. 입력을 끝내려면 Ctrl + d를 누르시오.\n");
    while((c = getchar()) != EOF)
        fputc(c, fp);
    fclose(fp);
}