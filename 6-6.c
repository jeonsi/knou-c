// 문자열을 저장한 배열의 사용
#include <stdio.h>
#pragma warning(disable:4996);

void main() {
    char str_in[50], str_out[50];
    int i = 0;
    printf("문자열을 입력하시오. : ");
    scanf("%s", str_in);
    do {
        str_out[i] = '*';
        i++;
    } while (str_in[i] != '\0');
    str_out[i] = '\0';
    printf("입력 문자열 배열 str_in = %s\n", str_in);
    printf("출력 문자열 배열 str_out = %s\n", str_out);
}