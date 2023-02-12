#include <stdio.h>
#include <stdlib.h>
#pragma warnging(disable:4996)

int main() {
    FILE *fp;
    char no[10], name[10];
    int mid, term, rep, att, i;
    fp = fopen("sample3.txt", "w");
    if(fp == NULL) {
        printf("파일을 개방할 수 없습니다!");
        exit(1);
    }
    fprintf(stdout, "학번 이름 중간 기말 리포트 출석 점수를 입력\n");
    for(i = 0; i < 5; ++i) {
        scanf("%s %s %d %d %d %d", no, name, &mid, &term, &rep, &att);
        fprintf(fp, "%-10s %-8s %3d %3d %3d %3d\n", no, name, mid, term, rep, att);
    }
}