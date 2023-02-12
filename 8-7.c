#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
    FILE *fp;
    char no[10], name[10];
    int mid, term, rep, att, i;
    fp = fopen("sample3.txt", "r");
    if(fp == NULL) {
        printf("파일을 개방할 수 없습니다!");
        exit(1);
    }
    printf("학번       이름    중간 기말 리포트 출석\n");
    while(!feof(fp)) {
        fscanf(fp, "%10s %8s %4d %4d %4d %4d\n", no, name, &mid, &term, &rep, &att);
        printf("%-10s %-8s %4d %4d %4d %4d\n", no, name, mid, term, rep, att);
    }
    fclose(fp);
}