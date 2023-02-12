#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
    FILE *fp;
    char c;
    fp = fopen("sample1.txt", "r");
    if(fp == NULL) {
        printf("파일을 개방할 수 없습니다!");
        exit(1);
    }
    while((c = getc(fp)) != EOF)
        putchar(c);
    fclose(fp);
}