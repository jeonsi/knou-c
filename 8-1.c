#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    char ch;
    FILE *fp;
    fp = fopen("sample.txt", "w");
    for (ch = 'A'; ch <= 'Z'; ch++)
        fputc(ch, fp);
    fclose(fp);
}